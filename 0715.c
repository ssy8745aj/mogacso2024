//7월 15일까지의 총 정리
//탕후루
/*
#include<stdio.h>

int main() {
    int num, str, shy, minus;
    scanf("%d %d %d", &num, &str, &shy);
    int strcc[100];
    int shycc[100];
    for (int i = 0; i < num; i++) {
        scanf("%d", &strcc[i]);
    }
    for (int i = 0; i < num; i++) {
        scanf("%d", &shycc[i]);
    }

    if (str - shy > 0) {
        minus = str - shy;
        for (int i = 0; i < num; i++) {
            if (shycc[i] - strcc[i] < 0) {
                printf("NO\n");
                return 0;
            }
            if ((shycc[i] - strcc[i]) % minus != 0) {
                printf("NO\n");
                return 0;
            }

        }
        printf("YES\n");
        for (int i = 0; i < num; i++) {
            printf("%d ", (shycc[i] - strcc[i]) / minus);
        }
    }
    else if (str - shy < 0) {
        minus = shy - str;
        for (int i = 0; i < num; i++) {
            if (strcc[i] - shycc[i] < 0) {
                printf("NO\n");
                return 0;
            }
            if ((strcc[i] - shycc[i]) % minus != 0) {
                printf("NO\n");
                return 0;
            }

        }
        printf("YES\n");
        for (int i = 0; i < num; i++) {
            printf("%d ", (strcc[i] - shycc[i]) / minus);
        }
    }
    else {
        minus = 0;
        for (int i = 0; i < num; i++) {
            if (strcc[i] - shycc[i] != 0) {
                printf("NO\n");
                return 0;
            }

        }
        printf("YES\n");
        for (int i = 0; i < num; i++) {
            printf("0 ");
        }
    }

    return 0;
}
*/


//뭔 게임
/*
#include<stdio.h>

int main() {
    int num;
    scanf("%d", &num);

    if (num % 2 == 0) {
        printf("CY");
    }
    else {
        printf("SK");
    }

    return 0;
}
*/



//유통기한 - 못품
/*
#include<stdio.h>


int main() {
    int year, month, day;
    scanf("%d %d %d", &year, &month, &day);
    int n;
    scanf("%d", &n);
    int A, B, C;
    int result[3] = { 0, };
    int _31[7] = { 1,3,5,7,8,10,12 };
    int _30[4] = { 4,6,9,11 };


    for (int i = 0; i < n; i++) {
        scanf("%d %d %d", &A, &B, &C);

        //연도 월 일
        if (B == 1 || B == 3 || B == 5 || B == 7 || B == 8 || B == 10 || B == 12) {
            if()
        }
        else if (B == 4 || B == 6 || B == 9 || B == 11) {
        
        }
        else if (B == 2) {
        
        }
        else {

        }
        //일 월 연도
        
        //월 일 연도
    }
    return 0;
}
*/


//듣보잡 - 못품

#include<stdio.h>
#include<string.h>

typedef struct name_ {
    char name[21];
}NAME;

int main() {
    int N, M;
    scanf("%d %d", &N, &M);
    NAME arr[500000];
    char Mame[21];
    NAME result[500000];
    int re = 0;

    for (int i = 0; i < N; i++) {
        scanf("%s", &arr[i].name);
    }
    for (int i = 0; i < M; i++) {
        scanf("%s", &Mame);
        for (int j = 0; j < N; j++) {
            if (strcmp(Mame, arr[j].name) == 0) {
                strcpy(result[re++].name, Mame);
                break;
            }
        }
    }
    printf("%d", re);
    for (int i = 0; i < re; i++) {
        printf("%s", result[i].name);
    }

    return 0;
}




//블랙잭
/*
#include<stdio.h>

int main() {
    int N, M;
    scanf("%d %d", &N, &M);
    int card[100];
    int sum =0;
    int result = 0;
    for (int i = 0; i < N; i++) {
        scanf("%d", &card[i]);
    }
    for (int i = 0; i < N - 2; i++) {
        for (int j = i+1; j < N - 1; j++) {
            for (int k = j+1; k < N; k++) {
                sum += card[i] + card[j] + card[k];
                if (sum > result && sum <= M) {
                    result = sum;
                }
                sum = 0;
            }
        }
    }
    printf("%d", result);

    return 0;
}
*/