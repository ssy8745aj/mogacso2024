//
/*
#include<stdio.h>

int main() {
	int N;
	for (int i = 0; i < N; i++) {
		printf("*");
	}
	printf("\n");
	for (int i = 0; i < (N - 2)/2; i++) {
		printf("*");
		for (int j = 0; j < i; j++) {
			printf(" ");
		}
		printf("*");
		for(int j=0; )
	}
}
*/




/*
#include<stdio.h>

int main() {
	long long n, m;
	scanf("%lld %lld", &n, &m);
	printf("%lld\n", n / m);
	printf("%lld", n % m);

	return 0;
}
*/



#include<stdio.h>

int main() {
	int N;
	scanf("%d", &N);
	long long A, B;
	for (int i = 0; i < N; i++) {
		scanf("%lld %lld", &A, &B);
		printf("Case #%d: ", i + 1);
		printf("%lld", A + B);
		printf("\n");
	}
	
	return 0;
}
