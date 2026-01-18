#include <stdio.h>

int main () {
    int N;
    scanf("%d", &N);

    int last_name[26] = {0};
    for(int i = 0; i < N; i++){
        char name[100];
        scanf("%s", &name);
        last_name[name[0] -'a']++;
    }
    int s = 0;
    for(int i = 0; i < 26; i++){
        if(last_name[i] >= 5){
            s = 1;
            printf("%c", i +'a');
        }
    }
    if(s == 0){
        printf("PREDAJA\n");
    }
    
    return 0;
}