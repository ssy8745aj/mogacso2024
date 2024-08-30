//2530번 브4 인공지능 시계
/*
#include<stdio.h>

int main() {
	int si, bun, cho, time;
	scanf("%d %d %d", &si, &bun, &cho);
	scanf("%d", &time);
	cho += time;
	bun += cho / 60;
	cho %= 60;
	si += bun / 60;
	bun %= 60;
	si %= 24;
	printf("%d %d %d", si, bun, cho);

	return 0;
}
*/





//2525번 브3 오븐 시계

#include<stdio.h>

int main() {
	int si, bun, time;
	scanf("%d %d", &si, &bun);
	scanf("%d", &time);
	bun += time;
	si += bun / 60;
	bun %= 60;
	si %= 24;
	printf("%d %d", si, bun);

	return 0;
}
