//4153번 브3 직각삼각형
/*
#include<stdio.h>

int main() {
	int a, b, c;
	while (1) {
		scanf("%d %d %d", &a, &b, &c);
		if (a == 0 && b == 0 && c == 0) {
			break;
		}
		if (a >= b && a >= c) {
			if (a * a == b * b + c * c) printf("right\n");
			else printf("wrong\n");
		}
		else if (b >= a && b >= c) {
			if (b * b == a * a + c * c) printf("right\n");
			else printf("wrong\n");
		}
		else if (c >= b && c >= a) {
			if (c * c == a * a + b * b) printf("right\n");
			else printf("wrong\n");
		}
	}

	return 0;
}
*/





//3460번 브3 이진수

#include<stdio.h>

int main() {
	long long T, n, index=0, bit=1;
	scanf("%lld", &T);
	for (long long i = 0; i < T; i++) {
		scanf("%lld", &n);
		while (n != 0) {
			if (n % (bit*2) == bit) {
				printf("%lld ", index);
				n -= bit;
			}
			bit *= 2;
			index++;
		}
		index = 0, bit = 1;
	}

	return 0;
}
