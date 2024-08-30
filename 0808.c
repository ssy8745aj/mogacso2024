//15552번 브4 빠른 A+B

//#include<stdio.h>
//
//int main() {
//	
//}






//5543번 브4 상근날드

#include<stdio.h>

int main() {
	int ham, drink;
	int hamin = 2001, drmin = 2001;
	for (int i = 0; i < 3; i++) {
		scanf("%d", &ham);
		hamin = ham < hamin ? ham : hamin;
	}
	for (int i = 0; i < 2; i++) {
		scanf("%d", &drink);
		drmin = drink < drmin ? drink : drmin;
	}
	printf("%d", hamin + drmin - 50);

	return 0;
}
