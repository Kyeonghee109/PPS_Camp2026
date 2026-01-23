#include <stdio.h>
int main () {
    int H, M;
    scanf("%d %d", &H, &M);

    if(M < 45){
        M = M + 60 - 45;
        if(H == 0){
            H = 23;
        }
        else H--;
    }
    else M -= 45;

    printf("%d %d", H, M);
    return 0;
}