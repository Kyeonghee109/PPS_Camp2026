#include <stdio.h>

int main() {
    int n; //멀티탭 개수
    scanf("%d",&n);

    int size = 0;
    for(int i = 0 ;i<n ;i++){
        int s;
        scanf("%d",&s);
        if(i+1 == n) size += s;
        else size += (s-1);
    }
    printf("%d",size);
    return 0;
}