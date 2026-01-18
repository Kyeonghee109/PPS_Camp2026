#include <stdio.h>

int main(){
    int count = 0;
    int max = 0;

    for(int i = 0;i < 4; i++){
        int dec, add;
        scanf("%d %d",&dec, &add);
        count-=dec;
        count+=add;
        if(max < count) max = count;
    }
    printf("%d",max);
    return 0;
}