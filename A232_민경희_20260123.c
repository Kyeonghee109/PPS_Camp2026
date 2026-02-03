#include <stdio.h>
int main () {
    int n;
    scanf("%d" , &n);
    double score[1000] = {0};
    for(int i = 0 ; i < n ; i++){
        scanf("%lf", &score[i]);
    }
    double m = 0; //점수 중 최댓값
    for(int i = 0 ; i < n ; i++){
        if(m < score[i]) m = score[i];
    }
    double sum = 0;
    for(int i = 0 ; i < n ; i++){
        score[i] = score[i] / m * 100;
        sum += score[i];
    }
    double avg = sum / n;
    printf("%lf",avg);
    return 0;   
}