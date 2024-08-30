//10474번 브3 분수좋아해?
/*
#include<stdio.h>

int main() {
   int bunza, bunmo, dae;
   do {
      scanf("%d %d", &bunza, &bunmo);
      if (bunza == 0 && bunmo == 0) {
         break;
      }
      dae = bunza / bunmo;
      bunza %= bunmo;
      printf("%d %d / %d\n", dae, bunza, bunmo);
   } while (1);

   return 0;
}
*/



//17863번 브4 FYI
/*
#include<stdio.h>

int main() {
	int N;
	scanf("%d", &N);
	int A, B, C;
	A = N / 1000000;
	N -= 1000000 * A;
	B = N / 100000;
	N -= 100000 * B;
	C = N / 10000;
	if (A == 5 && B == 5 && C == 5) {
		printf("YES");
	}
	else {
		printf("NO");
	}

	return 0;
}
*/



//25704번 브4 출석 이벤트

#include<stdio.h>

int main() {
	int N, P;
	scanf("%d %d", &N, &P);
	int temp, sale;
	sale = P;
	switch (N / 5) {
	case 6:
	case 5:
	case 4:
		temp = P * 3 / 4;
		if (sale > temp) {
			sale = temp;
		}
	case 3:
		temp = P - 2000;
		if (sale > temp) {
			sale = temp;
		}
	case 2:
		temp = P * 9 / 10;
		if (sale > temp) {
			sale = temp;
		}
	case 1:
		temp = P - 500;
		if (sale > temp) {
			sale = temp;
		}
	default:
	} // 여기서 오류 발생 구문 오류: '}' 근데 제출했더니 맞음

	if (sale < 0) {
		sale = 0;
	}
	printf("%d", sale);

	return 0;
}
