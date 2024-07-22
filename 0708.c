//7월 8일까지의 총 정리
//파스칼의 삼각형
/*
#include <stdio.h>
#include <stdlib.h>

int** create(int** p, int n) {
    if (n == 1) {
        p[n - 1][n - 1] = 1;
        return p;
    }
    else {
        create(p, n - 1);
        p[n - 1][0] = 1, p[n - 1][n - 1] = 1;
        for (int i = 1; i < n - 1; i++) {
            p[n - 1][i] = p[n - 2][i-1] + p[n - 2][i];
        }
        return p;
    }
}

int main()
{
    int n, k;
    scanf("%d %d", &n, &k);
    int** p = (int**) malloc(sizeof(int*) * n);
    for (int i = 0; i < n; i++) {
        p[i] = (int*) malloc(sizeof(int) * (i + 1));
    }

    create(p, n);

    printf("%d", p[n-1][k-1]);

    for (int i = 0; i < n; i++) {
        free(p[i]);
    }
    free(p);

    return 0;
}
*/



//버튜버 - 실패
/*
#include<stdio.h>
#include<string.h>

typedef struct ver_ {
    char name[21];
    int hh;
    int mm;
    int number;
    int dday;
    char yn;
}Ver;




int main() {
    int N, M;
    scanf("%d %d", &N, &M);

    Ver arr[100];
    int people = 0;
    char p_name[21];
    int day;
    char start[6], end[6];
    int index;
    int hour, mi;
    

    for (int i = 0; i < N; i++) {
        arr[i].hh = 0, arr[i].mm = 0, arr[i].number = 0, arr[i].yn='Y';
        scanf("%s %d %s %s", &p_name, &day, &start, &end);
        if (i==0) {
            strcpy(arr[people].name, p_name);
            people += 1;
            index = i;
        }
        for (int j = 0; j < people; j++) {
            if (strcmp(p_name, arr[j].name) == 0) {
                index = j;
                break;
            }
            else if (j == people - 1) {
                strcpy(arr[people].name, p_name);
                people += 1;
                index = j;
            }
        }

        //여기가 문제 / 7일과 8일 사이 차이를 찾아야 함
        if ((day / 7) - (arr[index].dday / 7) == 1 && ) {
            if (arr[index].number >= 5 && arr[index].hh >= 60) {
                arr[index].number = 0;
                arr[index].hh = 0;
                arr[index].mm = 0;
            }
            else{
                arr[index].yn = 'N';
            }
        }

        
        char* hs = strtok(start, ":");
        char* ms = strtok(NULL, ":");
        char* he = strtok(end, ":");
        char* me = strtok(NULL, ":");
        
        
        hour = ((int)*(he)-(int)*hs) * 10 + (int)*(he+1) - (int)*(hs+1);
        mi = ((int)*(me)-(int)*ms) * 10 + (int)*(me + 1) - (int)*(ms + 1);

        printf("%d %d\n", hour, mi);

        if (mi < 0) {
            hour -= 1;
            mi += 60;
        }
        arr[index].hh += hour;
        arr[index].mm += mi;
        if (arr[index].mm >= 60) {
            arr[index].hh += 1;
            arr[index].mm -= 60;
        }
        arr[index].number += 1;
        arr[index].dday = day;

    }

    for (int i = 0; i < people; i++) {
        if (arr[i].yn == 'Y') {
            printf("%s\n", arr[i].name);
        }
    }

    return 0;
}
*/