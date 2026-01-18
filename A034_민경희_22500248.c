#include <stdio.h>

int main () {
    int remain[42] = {0};
    for(int i = 0 ;i < 10; i++){
        int num;
        scanf("%d", &num);
        remain[num % 42]++;
    }
    int count = 0;
    for(int i = 0; i< 42; i++){
        if(remain[i] > 0){
            count++;
        }
    }
    printf("%d", count);
    return 0;
}