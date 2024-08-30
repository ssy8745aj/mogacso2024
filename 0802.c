//5532번 브4 방학 숙제

#include<stdio.h>

int main() {
	int L, A, B, C, D, date=0;
	scanf("%d %d %d %d %d", &L, &A, &B, &C, &D);
	while (A > 0 || B > 0) {
		A -= C;
		B -= D;
		date += 1;
	}
	printf("%d", L - date);

	return 0;
}
