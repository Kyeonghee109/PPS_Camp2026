#include <stdio.h>

int main () {
    int N;
    scanf("%d", &N);

    int price_Y = 0, price_M = 0;
    for(int i = 0; i < N; i++){
        int t;
        scanf("%d", &t);

        //영식 요금제
        price_Y += ((t/30)+1)*10;

        //민식 요금제
        price_M += ((t/60)+1)* 15;
    }

    if( price_M < price_Y ) printf("M %d\n",price_M);
    else if( price_M > price_Y ) printf("Y %d\n",price_Y);
    else printf("Y M %d\n",price_Y);

    return 0;
}