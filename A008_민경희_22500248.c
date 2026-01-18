/*
테스트 케이스(학생들의 점수)를 입력 받고 케이스마다 한 줄씩 평균을 넘는 학생들의 비율을 반올림하여 소수점 셋째 자리까지 출력한다.
 
 
테스트 케이스(학생들의 점수)를 입력 받고 케이스마다 한 줄씩 평균을 넘는 학생들의 비율을 반올림하여 소수점 셋째 자리까지 출력한다.
스크린 리더 지원 사용 설정
*/  

#include <stdio.h>
#include <math.h>

int main(){
    int N;
    scanf("%d", &N);

    for(int i = 0;i < N;i++){
        int n;
        scanf("%d",&n);

        int score[n], sum = 0, count = 0;
        float avg=0.0;

        for (int j = 0; j < n; j++){
            scanf("%d",&score[j]);
            sum += score[j];
        }
        avg = (float)sum / n;
        for(int j = 0; j < n; j++){
            if(score[j]>avg) count++;
        }
        float ratio = (float)count / n*100;
        printf("%.3f%%\n",round(ratio*1000)/1000);
    }
    return 0;
}