//5717번 브4 상근이의 친구들
/*
#include<stdio.h>

int main() {
	int M, F;
	scanf("%d %d", &M, &F);
	while (M != 0 && F != 0) {
		printf("%d\n", M + F);
		scanf("%d %d", &M, &F);
	}

	return 0;
}
*/





//27959번 브5 초코바

#include<stdio.h>

int main() {
	int N, M;
	scanf("%d %d", &N, &M);
	if (100 * N >= M) {
		printf("Yes");
	}
	else printf("No");

	return 0;
}
