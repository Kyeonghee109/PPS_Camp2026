#include <stdio.h>

int main () {
    int N;
    scanf("%d", &N);
    getchar();
    
    while(N--){
        float num;
        scanf("%f",&num);

        char line[100];
        fgets(line,sizeof(line),stdin);

        for(int i = 0; line[i] != '\0'; i++){
            if(line[i] == '@') num *= 3;
            else if(line[i] == '%') num += 5;
            else if(line[i] == '#') num -= 7;
        }
        printf("%.2f\n", num);
    }
    return 0;
}