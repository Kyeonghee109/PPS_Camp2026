#include <stdio.h>
#include <string.h>
int main () {
    int n;
    scanf("%d" ,&n);

    for(int i = 0 ; i < n ; i++){
        char str1[1001];
        char str2[1001];
        scanf("%s %s", str1, str2);

        if (strlen(str1) != strlen(str2)) {
            printf("Impossible\n");
            continue;
        }

        int count[26] = {0};
        int possible = 1;

        for(int j = 0 ; j < strlen(str1) ; j++){
            count[str1[j] - 'a']++;
            count[str2[j] - 'a']--;
        }
        for(int j = 0 ; j < 26 ; j++){
            if(count[j] != 0){
                possible =  0;
                break;
            }
        }
        if(possible) printf("Possible\n");
        else printf("Impossible\n");
    }
    return 0;
}