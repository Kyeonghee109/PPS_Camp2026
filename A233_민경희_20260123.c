#include <stdio.h>
void ReverseOver(int i, int j, int num[]);
int main () {
    int n, m;//바구니 수, 역순 만드는 횟수
    scanf("%d %d", &n, &m);

    int num[101] = {0};
    for(int i = 0 ; i < n; i++){
        num[i] = i+1;
    }

    for(int k = 0 ; k < m; k++){
        int i, j;
        scanf("%d %d", &i, &j);
        ReverseOver(i - 1,j - 1,num);
    }
    for(int i = 0 ; i < n; i++){
        printf("%d ",num[i]);
    }
    return 0;
}

void ReverseOver(int i, int j, int num[]){
    while(i < j){
        int t = num[i];
        num[i] = num[j];
        num[j] = t;
        i++;
        j--;
    }
}