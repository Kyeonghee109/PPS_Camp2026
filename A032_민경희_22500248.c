#include <stdio.h>

int main () {
    int T; //테스트 케이스
    scanf("%d", &T);

    int floor[15][15] = {0};

    for(int j = 1; j <= 14; j++){
        floor[0][j] = j;
    }

    for(int i = 1;i <=14; i++){
        floor[i][1] = 1; // 1호는 항상 1명
        for(int j = 2; j <= 14; j++){
            floor[i][j] = floor[i][j-1] + floor[i-1][j];
        }
    }

    for(int i = 0 ; i< T ; i++){
        int k, n;
        scanf("%d %d", &k, &n);
        printf("%d\n", floor[k][n]);
    }
    return 0;
}