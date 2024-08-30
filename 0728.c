//1264번 브4 모음의 개수 - 공백처리
/*
#include<stdio.h>
#include<string.h>

int main() {
	char arr[256];
	int aeiou = 0;
	do {
		scanf("%s", arr);
		if (arr[0] == '#' && arr[1] == '\0') {
			break;
		}
		for (int i = 0; i < strlen(arr); i++) {
			if (arr[i] == 'a' || arr[i] == 'e' || arr[i] == 'i' || arr[i] == 'o' || arr[i] == 'u') {
				aeiou += 1;
			}
		}
		printf("%d\n", aeiou);
		aeiou = 0;
	} while (1);

	return 0;
}
*/




//5596번 브4 시험 점수

#include<stdio.h>

int main() {
	int minguk = 0, manse = 0, N;
	for (int i = 0; i < 4; i++) {
		scanf("%d", &N);
		minguk += N;
	}
	for (int i = 0; i < 4; i++) {
		scanf("%d", &N);
		manse += N;
	}
	if (minguk >= manse) {
		printf("%d", minguk);
	}
	else {
		printf("%d", manse);
	}

	return 0;
}
