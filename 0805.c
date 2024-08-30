//31428번 브4 엘리스 트랙 매칭
/*
#include<stdio.h>

int main() {
	int N;
	char kind[2];
	int arr[4] = { 0, };
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		scanf("%s", kind);
		if (kind[0] == 'C') arr[0] += 1;
		else if (kind[0] == 'S') arr[1] += 1;
		else if (kind[0] == 'I') arr[2] += 1;
		else if (kind[0] == 'A') arr[3] += 1;
	}
	scanf("%s", kind);
	if (kind[0] == 'C') printf("%d", arr[0]);
	else if (kind[0] == 'S') printf("%d", arr[1]);
	else if (kind[0] == 'I') printf("%d", arr[2]);
	else if (kind[0] == 'A') printf("%d", arr[3]);

	return 0;
}
*/



//9461번 브3 파도반 수열 - 테스트케이스는 맞는데 왜 또 틀렸을까
/*
#include<stdio.h>

void dp_(int arr[], int N) {
	if (N == 6) {
		arr[N] = arr[N - 1] + arr[N - 5];
	}
	else {
		dp_(arr, N - 1);
		arr[N] = arr[N - 1] + arr[N - 5];
	}
}

int main() {
	int T, N;
	scanf("%d", &T);
	int dp[101] = { 0, 1,1,1,2,2 };
	dp_(dp, 100);
	for (int i = 0; i < T; i++) {
		scanf("%d", &N);
		printf("%d\n", dp[N]);
	}

	return 0;
}
*/




//2156번 포도주 시식 - 얘도 테스트 케이스는 다 맞는데 왜 틀릴까
/*
#include<stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	int grapezu[10000];
	int base = 0;
	for (int i = 0; i < n; i++) {
		scanf("%d", &grapezu[i]);
		base += grapezu[i];
	}
	int A = base, B = base, C = base;
	for (int i = 0; i < n / 3; i++) {
		A -= grapezu[i * 3];
		B -= grapezu[i * 3 + 1];
		C -= grapezu[i * 3 + 2];
	}
	if (n % 3 == 1) A -= grapezu[n-1];
	else if (n % 3 == 2) {
		A -= grapezu[n-2];
		B -= grapezu[n-1];
	}

	if (A >= B && A >= C) printf("%d", A);
	else if (B >= A && B >= C) printf("%d", B);
	else if (C >= B && C >= A) printf("%d", C);

	return 0;
}
*/




//9461번 실3 파도반 수열 - long long
/*
#include<stdio.h>

void dp_(long long arr[], int N) {
   if (N == 6) {
      arr[N] = arr[N - 1] + arr[N - 5];
   }
   else {
      dp_(arr, N - 1);
      arr[N] = arr[N - 1] + arr[N - 5];
   }
}

int main() {
   int T, N;
   scanf("%d", &T);
   long long dp[101] = { 0, 1,1,1,2,2 };
   dp_(dp, 100);
   for (int i = 0; i < T; i++) {
      scanf("%d", &N);
      printf("%lld\n", dp[N]);
   }

   return 0;
}
*/





//2346번 실3 풍선 터뜨리기

#include<stdio.h>

int main() {
   int N, start=0, next;
   int balloon[1000];
   int pang[1000];
   int j = 0;
   scanf("%d", &N);
   int fix = N;

   for (int i = 0; i < fix; i++) {
      scanf("%d", &balloon[i]);
   }
   while (N !=1 ) {
      next = start;
      pang[j++] = start+1;
      while (balloon[start] != 0) {
         if (balloon[start] > 0) {
            next += 1;
            if (next >= fix) next -= fix;
            if (balloon[next] != 0 && next!=start) {
               balloon[start] -= 1;
            }
         }
         else if (balloon[start] < 0) {
            next -= 1;
            if (next < 0) next += fix;
            if (balloon[next] != 0 && next!=start) {
               balloon[start] += 1;
            }
         }
      }
      start = next;
      N -= 1;
   }
   pang[j++] = start + 1;

   for (int i = 0; i < fix; i++) {
      printf("%d ", pang[i]);
   }
   
   return 0;
}
