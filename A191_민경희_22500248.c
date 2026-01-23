#include <stdio.h>
int main () {
    int N;
    scanf("%d ", &N);

    for( int i = 0; i < N ; i++){
        int n1, n2;
        scanf("%d %d", &n1, &n2);
        printf("%d\n", n1 + n2);
    }
    return 0;
}