#include <stdio.h>
int main () {
    int n;
    scanf("%d", &n);
    int o = 0, x = 0;
    
    for(int i= 0; i< n; i++){
        int cute;
        scanf("%d",&cute);
        if(cute == 1) o++;
        else x++;
    }
    if(o<x) printf("Junhee is not cute!");
    else printf("Junhee is cute!");
    return 0;
}