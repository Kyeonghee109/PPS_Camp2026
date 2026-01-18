/*
방 번호 N을 만들기 위해 필요한 숫자 세트의 개수를 구하는 문제. 단, 6과 9는 뒤집어서 서로로 이용할 수 있다.
*/

#include <stdio.h>

int main(){
    int room;
    scanf("%d",&room);

    int num[10]={0};
    while(1){
        int n = room%10; 
        num[n]++;
        if(room < 10) break;
        room = room/10;
    }

    int max=0;
    for(int i = 0; i<10;i++){
        if(i==6||i==9){
            if((num[6]+num[9])%2 == 0){
                if(max<(num[6]+num[9])/2){
                    max = (num[6]+num[9])/2;
                }
            }
            else{
                if(max<(num[6]+num[9])/2+1){
                    max = (num[6]+num[9])/2+1;
                }
            }
        }
        else{
            if(max < num[i]){
                max = num[i];
            }
        }
    }
    printf("%d",max);
    
    return 0;
}