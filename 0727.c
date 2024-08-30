//25175번 브3 두~~부 두부 두부
/*
#include<stdio.h>

int arr[100000];

int main() {
	int N, M, K;
	scanf("%d %d %d", &N, &M, &K);
	for (int i = 0; i < N; i++) {
		arr[i] = i + 1;
	}
	int next;
	next = M + (K - 3) - 1;
	if (next < 0) {
		while (next < 0) {
			next += N;
		}
	}
	else if (next >= N) {
		while (next >= N) {
			next -= N;
		}
	}
	printf("%d", arr[next]);

	return 0;
}
*/



//20113번 브1 긴급 회의
/*
#include<stdio.h>

int main() {
	int N;
	int X;
	int vote[101] = { 0, };
	int many;
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		scanf("%d", &X);
		vote[X] += 1;
	}
	many = 1;
	for (int i = 2; i <= N; i++) {
		if (vote[many] < vote[i]) {
			many = i;
		}
	}
	for (int i = 1; i <= N; i++) {
		if (vote[many] == vote[i] && many != i) {
			many = 0;
			break;
		}
	}
	if (many == 0) {
		printf("skipped");
	}
	else {
		printf("%d", many);
	}

	return 0;
}
*/



//1225번 브2 이상한 곱셈 - 런타임에러나고지랄남
/*
#include<stdio.h>

int main() {
	int Arr[5] = { 0, }, Brr[5] = { 0, };
	scanf("%s %s", Arr, Brr);
	int Alen, Blen;

	for (int i = 0; i < 5; i++) {
		if (Arr[i] == 0) {
			Alen = i;
			break;
		}
	}for (int i = 0; i < 5; i++) {
		if (Brr[i] == 0) {
			Blen = i;
			break;
		}
	}
	printf("%d %d", Alen, Blen);

	return 0;
}
*/




//1453번 브2 피시방 알바
/*
#include<stdio.h>

int main() {
	int PC[100] = { 0, };
	int N, W, count = 0;
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		scanf("%d", &W);
		if (PC[W - 1] == 1) {
			count += 1;
		}
		else {
			PC[W - 1] = 1;
		}
	}
	printf("%d", count);

	return 0;
}
*/




//2747번 브2 피보나치 수

#include<stdio.h>

int main() {
	int Pibo[46];
	int n;
	scanf("%d", &n);
	Pibo[0] = 0;
	Pibo[1] = 1;
	for (int i = 2; i <= n; i++) {
		Pibo[i] = Pibo[i - 2] + Pibo[i - 1];
	}
	printf("%d", Pibo[n]);

	return 0;
}
