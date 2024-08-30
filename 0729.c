//1264번 브4 모음의 개수 - 공백처리
/*
#include<stdio.h>

int main() {
	char c;
	int aeiou = 0;
	do {
		do {
			scanf("%c", &c);
			if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
				aeiou += 1;
			}
			if (c == '#') {
				break;
			}
		} while (c != '\n');
		if (c == '#') {
			break;
		}
		printf("%d\n", aeiou);
		aeiou = 0;
	} while (1);

	return 0;
}
*/




//4134번 다음 소수
/*
#include<stdio.h>

int main() {
   long long m, n;
   scanf("%lld", &m);
   long long result;
   long long escape = 1;
   int temp;

   for (long long i = 0; i < m; i++) {
      scanf("%lld", &n);
      temp = n + 1;
      if (temp % 2 == 0) {
         temp += 1;
      }
      while(escape){
         for (long long k = 2; k <= temp/2; k++) {
            if (temp % k == 0) {
               break;
            }
            else if (k == temp / 2) {
               result = temp;
               escape = 0;
               break;
            }
         }
         if (escape) {
            temp += 2;
         }
      }
      escape = 1;
      printf("%lld\n", result);
   }

   return 0;
}
*/




//9461번 실3 파도반 수열 - 왜 틀림
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




//10039번 브4 평균 점수

#include<stdio.h>

int main() {
   int sum = 0, N;
   for (int i = 0; i < 5; i++) {
      scanf("%d", &N);
      sum += N < 40 ? 40 : N;
   }
   printf("%d", sum / 5);

   return 0;
}
