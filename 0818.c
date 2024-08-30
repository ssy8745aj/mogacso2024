//27110번 브4 특식 배부

#include<stdio.h>

int main() {
	int N, A, sum=0;
	scanf("%d", &N);
	for (int i = 0; i < 3; i++) {
		scanf("%d", &A);
		sum += A < N ? A : N;
	}
	printf("%d", sum);

	return 0;
}
