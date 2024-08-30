//29863번 브5 Arno's Sleep Schedule
/*
#include<stdio.h>

int main() {
	int sleep, wakeup, total;
	scanf("%d %d", &sleep, &wakeup);
	if (sleep >= 20) {
		wakeup += 24;
		total = wakeup - sleep;
	}
	else {
		total = wakeup - sleep;
	}

	printf("%d", total);

	return 0;
}
*/



//21313번 브2 문어 - 이게 왜 맞지?
/*
#include<stdio.h>

int main() {
	int N;
	int arr[1000];
	scanf("%d", &N);
	if (N % 2 == 0) {
		for (int i = 0; i < N / 2; i++) {
			arr[2 * i] = 1;
			arr[2 * i + 1] = 2;
		}
	}
	else {
		for (int i = 0; i < N / 2; i++) {
			arr[2 * i] = 1;
			arr[2 * i + 1] = 2;
		}
		arr[N - 1] = 3;
	}

	for (int i = 0; i < N; i++) {
		printf("%d ", arr[i]);
	}

	return 0;
}
*/



//22341번 브2 사각형 면적
/*
#include<stdio.h>

int main() {
	int N, C;
	int A, B, X, Y;
	int trans, leng, area;
	scanf("%d %d", &N, &C);
	area = N * N;
	A = N, B = N;
	for (int i = 0; i < C; i++) {
		scanf("%d %d", &X, &Y);
		if (X >= A || Y >= B) {
			
		}
		else {
			trans = (A - X) * B;
			leng = (B - Y) * A;
			if (trans > leng) {
				area -= leng;
				B = Y;
			}
			else if (trans < leng) {
				area -= trans;
				A = X;
			}
			else {
				area -= trans;
				A = X;
			}
		}
		
	}

	printf("%d", area);

	return 0;
}
*/




//2729번 브1 이진수 덧셈 - 내일하자

#include<stdio.h>
#include<string.h>

int main() {
	int T;
	scanf("%d", &T);
	int A[80], B[80], C[80] = { 0, }, result[81];
	int Alen, Blen, Df;
	for (int i = 0; i < T; i++) {
		scanf("%s %s", A, B);
		Alen = strlen((char*)A);
		Blen = strlen((char*)B);
		if (Alen > Blen) {
			Df = Alen - Blen;
			strncpy((char*)C[Df], (char*)B, Blen);
			printf("%s %s", (char*)A, (char*)C);
		}
	}

	return 0;
}
