#include <stdio.h>
int main () {
    int n1, n2;
    scanf("%d %d", &n1, &n2);

    for(int i = n1; i <= n2; i++){
        if(i==1) continue;

        int prime = 1;
        for(int j = 2; j*j<=i; j++){
            if(i % j == 0) prime = 0;
        }
        if(prime) printf("%d\n", i);
    }
    return 0;
}