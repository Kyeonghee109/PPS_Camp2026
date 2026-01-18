#include <stdio.h>
#include <string.h>


int main(){
    char A[10005], B[10005];
    scanf("%s %s",&A, &B);
    
    int lenA = strlen(A);
    int lenB = strlen(B);

    int i = lenA - 1;
    int j = lenB - 1;
    int carry = 0; //올림ㅜ 저장

    char result[10005];
    int idx = 0;

    while(i>=0 || j>=0 || carry){ //A,B에 숫자가 남아있거나 올림이 남아있음 계속
        int sum = carry; //올림 숫자 부터 시작

        if(i >= 0) sum += A[i--] - '0';
        if(j >= 0) sum += B[j--] - '0';

        result[idx++] = (sum % 10) + '0';
        carry = sum / 10;
    }
    for(int i = idx - 1; i >= 0; i--){
        printf("%c",result[i]);
        
    }
    printf("\n");
    
    return 0;
}