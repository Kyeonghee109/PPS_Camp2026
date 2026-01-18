#include <stdio.h>

int main () {
    int score[5] = {0};
    for(int i = 0; i<5; i++){
        int sum = 0;
        for(int j = 0; j<4 ; j++){
            scanf("%d", &sum);
            score[i] += sum;
        }
    }
    int max = score[0];
    int max_idx = 0;
    for(int i = 1; i< 5; i++){
        if(max < score[i]) {
            max = score[i];
            max_idx = i;
        }
    }
    printf("%d %d\n",max_idx+1,max);
    return 0;
}