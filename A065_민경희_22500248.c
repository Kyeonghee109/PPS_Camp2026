#include <stdio.h>
#include <stdlib.h>

int cmp(const void* a, const void* b){
    int*p=(int*)a;
    int*q=(int*)b;

    if(p[0] != q[0])
        return p[0] - q[0];   // X 기준
    return p[1] - q[1];       // X 같으면 Y
}
int main(){
    int N;
    scanf("%d", &N);

    int arr[N][2];

    for(int i = 0; i < N; i++)
        scanf("%d %d", &arr[i][0], &arr[i][1]);

    qsort(arr, N, sizeof(arr[0]), cmp);

    for(int i = 0; i < N; i++)
        printf("%d %d\n", arr[i][0], arr[i][1]);

    return 0;
}