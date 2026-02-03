#include <stdio.h>
int main () {
    int student[30] = {0};
    for(int i = 0 ; i < 28 ; i ++){
        int number;
        scanf("%d", &number);
        student[number - 1]++;
    }
    for(int i = 0 ; i < 30 ; i ++){
        if(student[i] == 0) printf("%d\n",i+1);
    }
    return 0;
}