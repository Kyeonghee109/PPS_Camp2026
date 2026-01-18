#include <stdio.h>

int main () {
    int N, M;
    scanf("%d %d", &N, &M);

    int count = 0;
    count += N-1;
    count += N*(M-1);

    printf("%d",count);

}