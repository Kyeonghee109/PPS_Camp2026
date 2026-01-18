#include <stdio.h>
#include <string.h>

int main () {
    int N;
    scanf("%d", &N);

    int count = 0;
    for(int i = 0; i< N; i++){
        char str[100];
        scanf("%s", &str);

        int state = 0;
        for(int j = 1; j < strlen(str); j++){
            if(str[j-1] != str[j]){
                for(int k = 0 ; k < j-1; k++){
                    if(str[j]==str[k]){
                        state = 1;
                        break;
                    }
                }
            }
        }
        if(state == 0) count++;
    }
    printf("%d", count);
    return 0;
}