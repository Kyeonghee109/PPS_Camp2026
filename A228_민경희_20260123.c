#include <stdio.h>
int main () {
    int N;
    scanf("%d", &N);
    if(N==0) printf("1");
    else{
        int result = 1;
        for(int i = 1 ; i <= N; i++){
            result *= i;
        }
        printf("%d", result);
    }
    return 0;
}