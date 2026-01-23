#include <stdio.h>
int main () {
    int num ;
    scanf ("%d", &num);
    for(int i = 4 ; i <= num; i+=4){
        printf("long ");
    }
    printf("int");
    return 0;
}