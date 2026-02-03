#include <stdio.h>
#include <string.h>
int main () {
    int n;
    scanf("%d", &n);

    char s[n][20]; 
    int x[n];
    char card[4][20] = {"STRAWBERRY", "BANANA", "LIME", "PLUM"};
    for(int i = 0 ; i < n; i++){
        scanf("%s %d", s[i], &x[i]);
    }
    int score[4] = {0};
    for(int i = 0 ; i < n; i++){
        if(strcmp(s[i],card[0])==0){
            score[0] += x[i];
        }
        else if(strcmp(s[i],card[1])==0){
            score[1] += x[i];
        }
        else if(strcmp(s[i],card[2])==0){
            score[2] += x[i];
        }
        else if(strcmp(s[i],card[3])==0){
            score[3] += x[i];
        }
    }
    int bell = 0;
    for(int i = 0 ; i < 4; i++){
        if(score[i] == 5) bell = 1;
    }
    if(bell) printf("YES");
    else printf("NO");
    return 0;
}