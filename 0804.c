//30402번 브4 감마선을 맞은 컴퓨터

#include<stdio.h>

int main() {
	char pixel;
	int cat=0;
	for (int i = 0; i < 15; i++) {
		for (int j = 0; j < 30; j++) {
			scanf("%c", &pixel); //문자 1개만 받도록 설정되어 있어서 1 2 3 4를 입력하면 공백도 변수로 들어감
			if (pixel == 'w' && cat!=1) {
				cat = 1;
			}
			else if (pixel == 'b'&& cat!=2) {
				cat = 2;
			}
			else if (pixel == 'g'&& cat!=3) {
				cat = 3;
			}
		}
	}
	if (cat == 1) {
		printf("chunbae");
	}
	else if (cat == 2) {
		printf("nabi");
	}
	else if (cat == 3) {
		printf("yeongcheol");
	}

	return 0;
}
