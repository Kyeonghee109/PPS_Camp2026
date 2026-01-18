#include <stdio.h>
#include <math.h>

int main() {
    //첫째 줄에 정수 N(1 ≤ N ≤ 100)과 현재 재현이의 기분(좋은 날 0, 싫은 날 1)이 주어진다.
    int N, F;
    scanf("%d %d",&N, &F);

    //좋+ -> 좋+ , 좋+ -> 싫-, 싫- -> 좋+, 싫- -> 싫- 확률
    float chance1 , chance2, chance3, chance4;
    scanf("%f %f %f %f", &chance1, &chance2, &chance3, &chance4);
    
    float g=0.0, b=0.0;
    for(int i = 0;i <N; i++){
        if(i==0){
            if(F==0){
                g=chance1;
                b=chance2;
            }
            else{
                g=chance3;
                b=chance4;
            }
        }
        else{
            float tg = g, tb = b;
            g = tg*chance1 + tb*chance3;
            b = tb*chance4 + tg*chance2;
        }
    }
    g = g*1000;
    b = b*1000;
    printf("%.0f %.0f\n", round(g), round(b));
}