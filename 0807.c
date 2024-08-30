//5789번 브3 한다 안한다
/*
#include<stdio.h>
#include<string.h>

int main() {
	int N, arrlen;
	char arr[1000];
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		scanf("%s", arr);
		arrlen = strlen(arr);
		if (arr[arrlen / 2 - 1] == arr[arrlen / 2]) {
			printf("Do-it\n");
		}
		else printf("Do-it-Not\n");
	}
	
	return 0;
}
*/




//2355번 브2 시그마 - float 문제 -> double로 바꿔서 해결
/*
#include<stdio.h>

int main() {
	double A, B, sum, temp;
	scanf("%lf %lf", &A, &B);
	temp = A > B ? A - B + 1 : B - A + 1;
	sum = (A + B) / 2 * temp;
	printf("%lld", (long long)sum);

	return 0;
}
*/





//2163번 브1 초콜릿 자르기
/*
#include<stdio.h>

int main() {
	int N, M;
	scanf("%d %d", &N, &M);
	printf("%d", N * M - 1);

	return 0;
}
*/





//17269번 브1 이름궁합 테스트

#include<stdio.h>

int main() {
	char English[30] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z' };
	int num[26] = {3,2,1,2,4,3,1,3,1,1,3,1,3,2,1,2,2,2,1,2,1,1,1,2,2,1};
	int N, M, large, index=0;
	scanf("%d %d", &N, &M);
	char name1[101], name2[101], name3[201];
	int name[200];
	scanf("%s %s", name1, name2);
	large = N > M ? N : M;
	for (int i = 0; i < large; i++) {
		if (N > i)name3[index++] = name1[i];
		if (M > i)name3[index++] = name2[i];
	}
	for (int i = 0; i < index; i++) {
		for (int j = 0; j < 26; j++) {
			if (name3[i] == English[j]) {
				name[i] = num[j];
				break;
			}
		}
	}
	for (int i = 0; i < index - 2; i++) {
		for (int j = 0; j < index-i-1; j++) {
			name[j] = (name[j] + name[j + 1]) % 10;
		}
	}
	if (name[0] != 0) printf("%d", name[0]);
	printf("%d%%", name[1]);

	return 0;
}
