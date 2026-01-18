#include <stdio.h>

int main () {
    int N;
    scanf("%d", &N);

    for(int i = 0; i < N; i++){
        char answer[81];
        int score = 0;
        int sum = 0;
        scanf("%s", answer);

        for(int j=0; answer[j]!='\0'; j++){
            if(answer[j] == 'O'){
                score++;
                sum += score;
            }
            else score = 0;
        }
        printf("%d\n", sum);
    }
    return 0;
}