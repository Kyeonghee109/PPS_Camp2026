#include <stdio.h>
int main () {
    int N ;
    scanf("%d", &N);

    int n[N];
    for (int i = 0; i < N; i++){
        scanf("%d", &n[i]);
    }
    int v;
    scanf("%d", &v);

    int count = 0;
    for (int i = 0; i < N; i++){
        if(v == n[i]) count++;
    }
    printf("%d", count);

    return 0;
}