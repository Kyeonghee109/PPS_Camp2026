#include <stdio.h>
int main () {
    int n1, n2, n3;
    scanf("%d %d %d", &n1, &n2, &n3);

    int award = 0;
    //주사위 세개가 다 같을때
    if(n1 == n2 && n2 == n3){
        award = 10000 + n1 * 1000;
    }
    //주사위 두개만 같을때
    else if(n1 == n2 || n2 == n3 || n3 == n1){
        if(n1 == n2) award = 1000 + n1 * 100;
        else if(n2 == n3) award = 1000 + n2 * 100;
        else award = 1000 + n1 * 100;
    }
    //주사위가 다 다를때
    else{
        if(n1 > n2){
            if(n1 > n3) award = n1 * 100;
            else award = n3 * 100;
        }
        else{
            if(n2 > n3) award = n2 * 100;
            else award = n3 * 100;
        }
    }
    printf("%d", award);
    return 0;
}