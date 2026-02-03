#include <stdio.h>
int main () {
    int n;
    scanf("%d", &n);
    int count = 0;
    for(int i = 0; i < n; i++){
        int num;
        scanf("%d", &num);

        if(num <= 1) continue;
        int prime = 1;
        for(int j = 2; j*j<= num; j++){
            if(num % j == 0) {
                prime = 0;
                break;
            }
        }
        if(prime == 1) count++;
    }
    printf("%d", count);
    return 0;
}