//1246번 실4 온라인 판매
/*
#include<stdio.h>
#include<stdlib.h>

int sort(const void *a, const void *b) {
	return (*(int*)a - *(int*)b);
}

int main() {
	int N, M, price, profit=0, temp;
	scanf("%d %d", &N, &M);
	int T = M - N < 0 ? 0 : M - N;
	int arr[1000];
	for (int i = 0; i < M; i++) {
		scanf("%d", &arr[i]);
	}
	qsort(arr, M, sizeof(int), sort);
	for (int i = T; i < M; i++) {
		temp = (M - i) * arr[i];
		if (temp > profit) {
			profit = temp;
			price = arr[i];
		}
	}
	printf("%d %d", price, profit);

	return 0;
}
*/




//2729번 브1 이진수 덧셈 - 왜 틀리는데 미친새끼야

#include<stdio.h>
#include<string.h>

void move(char a[], int max) {
	int alen = strlen(a);
	for (int i = alen - 1; i >= 0; i--) {
		a[i + max - alen] = a[i];
	}
	for (int i = 0; i < max - alen; i++) {
		a[i] = '0';
	}
	a[max] = '\0';
}

int main() {
	int T;
	char A[81];
	char B[81];
	int result[81];
	int carry, Alen, Blen, max, a, b, temp, start = 1;
	scanf("%d", &T);
	for (int i = 0; i < T; i++) {
		scanf("%s", A);
		scanf("%s", B);
		Alen = strlen(A);
		Blen = strlen(B);
		carry = 0;
		if (Alen > Blen) {
			max = Alen;
			move(B, max);
		}
		else if (Alen < Blen) {
			max = Blen;
			move(A, max);
		}
		else max = Alen;

		for (int j = max - 1; j >= 0; j--) {
			a = A[j] - '0';
			b = B[j] - '0';
			temp = a + b + carry;
			result[j] = temp % 2;
			carry = temp / 2;
		}
		if (carry == 1) {
			printf("%d", carry);
			start = 0;
		}
		for (int j = 0; j < max; j++) {
			if (start && result[j] == 0) continue;
			printf("%d", result[j]);
			start = 0;
		}
		if (start) printf("0");
		printf("\n");
		start = 1;
	}
	return 0;
}

