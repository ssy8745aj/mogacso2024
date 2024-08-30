//4134번 다음 소수
/*
#include<stdio.h>

#define MAX 10000000000

int main() {
   long long m, n;
   scanf("%lld", &m);
   long long result;
   long long escape = 0;

   for (long long i = 0; i < m; i++) {
      scanf("%lld", &n);
      for (long long j = n; j < MAX; j++) {
         for (long long k = 2; k <= j/2; k++) {
            if (j % k == 0) {
               printf("0\n");
               break;
            }
            else if (k = j / 2) {
               printf("%lld\n", j);
               result = j;
               escape = 1;
               break;
            }
         }
         if (escape == 1) {
            break;
         }
      }
      escape = 0;
      printf("%lld\n", result);
   }

   return 0;
}
*/


//5063번 TGN
/*
#include<stdio.h>

int main() {
   int N, r, e, c;
   int notad, ad;
   scanf("%d", &N);

   for (int i = 0; i < N; i++) {
      scanf("%d %d %d", &r, &e, &c);
      notad = r;
      ad = e - c;
      if (notad < ad) {
         printf("advertise\n");
      }
      else if (notad > ad) {
         printf("do not advertise\n");
      }
      else {
         printf("does not matter\n");
      }
   }
   return 0;
}
*/


//2161번 카드1
/*
#include<stdio.h>

int main() {
   int N;
   int arr[1000];
   int temp;
   scanf("%d", &N);
   for (int i = 0; i < N; i++) {
      arr[i] = i + 1;
   }
   while (1) {
      printf("%d\n", arr[0]);
      N -= 1;
      if (N == 0) break;
      for (int i = 0; i < N; i++) {
         arr[i] = arr[i + 1];
      }
      temp = arr[0];
      for (int i = 0; i < N; i++) {
         arr[i] = arr[i + 1];
      }
      arr[N-1] = temp;
   }
   return 0;
}
*/



//1920번 수 찾기 - 아직 다 못품

#include<stdio.h>
#include<stdlib.h>

int compare(const void* a, const void* b) {
   if (*(int*)a > *(int*)b) {
      return 1;
   }
   else {
      return -1;
   }
}

int arr[100000];

void result_ (int arr[], int min, int max, int value) {
   int mid;
   mid = 0;
   while (mid != max && mid != min) {
      if ((min + max) % 2 == 0) {
         mid = (min + max) / 2;
      }
      else {
         mid = (min + max+1) / 2;
      }

      if (value > arr[mid]) {
         min = mid;
      }
      else if (value < arr[mid]) {
         max = mid;
      }
      else {
         printf("1\n");
         return;
         break;
      }
   }
   printf("0\n");
}

int main() {
   int N, M, num;
   scanf("%d", &N);
   int max = N, min = 1, mid;
   for (int i = 0; i < N; i++) {
      scanf("%d", &arr[i]);
   }
   qsort(arr, N, sizeof(int), compare);
   scanf("%d", &M);
   for (int i = 0; i < M; i++) {
      scanf("%d", &num);
      result_(arr, max, min, num);
   }
   return 0;
}




