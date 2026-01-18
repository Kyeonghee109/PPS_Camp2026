/*
모음(a,e,i,o,u) 하나를 반드시 포함하여야 한다.
모음이 3개 혹은 자음이 3개 연속으로 오면 안 된다.
같은 글자가 연속적으로 두번 오면 안되나, ee 와 oo는 허용한다.
*/

#include <stdio.h>
#include <string.h>
int main () {
    char pw[21];
    

    while(1){
        scanf("%s", pw);
        if(strcmp(pw,"end")==0) break;

        //모음(a,e,i,o,u) 하나를 반드시 포함
        int find = 0;
        for(int i = 0; i< strlen(pw); i++){
            if(pw[i]=='a'||pw[i]=='e'||pw[i]=='i'||pw[i]=='o'||pw[i]=='u') find = 1;
        }
        if(find == 0){
            printf("<%s> is not acceptable.\n",pw);
            continue;
        }

        //모음이 3개 혹은 자음이 3개 못옴
        int check[20] = {0}; //자음: 0, 모음: 1
        find = 0;
        for(int i = 0; i< strlen(pw); i++){
            if(pw[i]=='a'||pw[i]=='e'||pw[i]=='i'||pw[i]=='o'||pw[i]=='u') check[i] = 0;
            else check[i] = 1;

            if(i>1){
                if(check[i]==check[i-1] && check[i-1]==check[i-2]){
                    printf("<%s> is not acceptable.\n",pw);
                    find = 1;
                    break;
                }
            }
        }
        if(find == 1) continue;

        //같은 글자가 연속적으로 두번 오면 안되나, ee 와 oo는 허용
        find = 0;
        for(int i = 1; i < strlen(pw); i++){
            if(pw[i-1]==pw[i]){
                if(pw[i] != 'e' && pw[i] !='o'){
                    printf("<%s> is not acceptable.\n",pw);
                    find = 1;
                    break;
                }
            }
        }
        if(find == 1) continue;
        printf("<%s> is acceptable.\n",pw);
    }
    return 0;
}