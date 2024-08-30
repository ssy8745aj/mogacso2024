//2744번 대소문자 바꾸기
/*
#include<stdio.h>
#include<string.h>

char* change(char arr[]) {
	for (int i = 0; i < strlen(arr); i++) {
		if ((int)arr[i] < 91) {
			arr[i] += 32;
		}
		else {
			arr[i] -= 32;
		}
	}

	return arr;
}

int main() {
	char arr[101];
	scanf("%s", arr);
	change(arr);
	printf("%s", arr);

	return 0;
}
*/



//5522번 카드게임
/*
#include<stdio.h>

int main() {
	int sum = 0;
	int score;
	for (int i = 0; i < 5; i++) {
		scanf("%d", &score);
		sum += score;
	}
	printf("%d", sum);

	return 0;
}
*/



//21300번 Bottle Return
/*
#include<stdio.h>

int main() {
	int sum = 0;
	int bottle;
	for (int i = 0; i < 6; i++) {
		scanf("%d", &bottle);
		sum += bottle * 5;
	}
	printf("%d", sum);

	return 0;
}
*/



//30868번 개표
/*
#include<stdio.h>

int main() {
	int N, vote = 0;
	scanf("%d", &N);
	
	for (int i = 0; i < N; i++) {
		scanf("%d", &vote);
		for (int j = 0; j < vote / 5; j++) {
			printf("++++ ");
		}
		for (int j = 0; j < vote % 5; j++) {
			printf("|");
		}
		printf("\n");
	}

	return 0;
}
*/



//17548번 GReetings!
/*
#include<stdio.h>
#include<string.h>

int main() {
	char arr[1001];
	scanf("%s", arr);
	for (int i = 0; i < strlen(arr); i++) {
		if (arr[i] == 'e') {
			printf("%c", arr[i]);
		}
		printf("%c", arr[i]);
	}
	return 0;
}
*/



//9325번 브3 얼마?
/*
#include<stdio.h>

int main() {
	int N, price, op_n, n, op_p, sum=0;
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		scanf("%d %d", &price, &op_n);
		sum += price;
		for (int j = 0; j < op_n; j++) {
			scanf("%d %d", &n, &op_p);
			sum += n * op_p;
		}
		printf("%d\n", sum);
		sum = 0;
	}
	return 0;
}
*/



//23803번 브3 골뱅이 찍기 - ㄴ
/*
#include<stdio.h>

int main() {
	int N;
	scanf("%d", &N);
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < N; j++) {
			for (int k = 0; k < N; k++) {
				printf("@");
			}
			printf("\n");
		}
	}
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < 5 * N; j++) {
			printf("@");
		}
		printf("\n");
	}

	return 0;
}
*/



//1731번 브2 추론
/*
#include<stdio.h>

int main() {
	int N;
	long long last;
	int arr[50];
	scanf("%d", &N);

	for (int i = 0; i < N; i++) {
		scanf("%d", &arr[i]);
	}
	if (arr[1]-arr[0]==arr[2]-arr[1]) {
		last = arr[N - 1] + (arr[1] - arr[0]);
	}
	else {
		last = arr[N - 1] * (arr[1] / arr[0]);
	}
	printf("%lld", last);

	return 0;
}
*/



//1978번 브2 소수 찾기

#include<stdio.h>

int main() {
	int N, prime = 0, num;
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		scanf("%d", &num);
		prime += 1;
		if (num == 1) prime -= 1;
		for (int j = 2; j <= num / 2; j++) {
			if (num % j == 0) {
				prime -= 1;
				break;
			}
		}
	}
	printf("%d", prime);

	return 0;
}
