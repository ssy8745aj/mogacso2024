//1267번 브3 핸드폰 요금

#include<stdio.h>

int main() {
   int N, T, Y=0, M=0;
   scanf("%d", &N);
   for (int i = 0; i < N; i++) {
      scanf("%d", &T);
      Y += 10 * (T / 30) + 10;
      M += 15*(T / 60) + 15;
   }
   
   if (Y > M) {
      printf("M %d", M);
   }
   else if (Y < M) {
      printf("Y %d", Y);
   }
   else {
      printf("Y M %d", Y);
   }

   return 0;
}
