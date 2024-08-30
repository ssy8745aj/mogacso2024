//31926번 실1 밤양갱
/*
#include<stdio.h>

long long dp[100000000];

void put(long long arr[], long long N) {
	if (N == 2) {
		arr[N] = 1;
	}
	else {
		put(arr, N - 1);
		if (N % 2 == 0) arr[N] = arr[N / 2] + 1;
		else arr[N] = arr[N - 1] + 1;
	}
}

int main() {
	long long sum = 10;
	long long N;
	scanf("%lld", &N);
	dp[1] = 1;
	if (N > 1) {
		put(dp, N);
	}
	printf("%lld", dp[N]+sum);

	return 0;
}
*/




//31926번 실1 밤양갱
/*
#include<stdio.h>

int main() {
	long long sum = 10;
	long long N;
	scanf("%lld", &N);
	if (N == 1) {
		printf("%lld", sum);
		return 0;
	}

	while (N != 1) {
		if (N % 2 == 0) {
			sum += 1;
			N /= 2;
		}
		else {
			sum += 1;
			N -= 1;
		}
	}
	printf("%lld", sum);

	return 0;
}
*/





//11399번 실4 ATM
/*
#include<stdio.h>
#include<stdlib.h>

int compare(const void* a, const void* b) {
	if (*(int*)a > *(int*)b) {
		return 1;
	}
	else {
		return -1;
	}
}


int main() {
	int N, sum=0;
	int arr[1000];
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		scanf("%d", &arr[i]);
	}
	qsort(arr, N, sizeof(int), compare);
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < i + 1; j++) {
			sum += arr[j];
		}
	}
	printf("%d", sum);

	return 0;
}
*/





//2828번 실5 사과 담기 게임

#include<stdio.h>

int main() {
	int N, M, J, apple;
	scanf("%d %d", &N, &M);
	int left = 1, right = M, distance=0;
	scanf("%d", &J);
	for (int i = 0; i < J; i++) {
		scanf("%d", &apple);
		if (apple >= left && apple <= right) {
			
		}
		else {
			if (apple < left) {
				distance += left - apple;
				left -= left-apple;
				right -= left-apple;
			}
			else {
				distance += apple-right;
				left += apple-right;
				right += apple-right;
			}
		}
	}
	printf("%d", distance);

	return 0;
}
