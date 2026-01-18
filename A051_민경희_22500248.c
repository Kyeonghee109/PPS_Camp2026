#include <stdio.h>
#include <string.h>

int main () {
    char str[100];
    scanf("%s", str);

    int num[100] = {0};
    for(int i = 0; str[i] != '\0'; i++){
        if(str[i] >= 'A' && str[i] <= 'C')
            num[i] = 2;
        else if(str[i] >= 'D' && str[i] <= 'F')
            num[i] = 3;
        else if(str[i] >= 'G' && str[i] <= 'I')
            num[i] = 4;
        else if(str[i] >= 'J' && str[i] <= 'L')
            num[i] = 5;
        else if(str[i] >= 'M' && str[i] <= 'O')
            num[i] = 6;
        else if(str[i] >= 'P' && str[i] <= 'S')
            num[i] = 7;
        else if(str[i] >= 'T' && str[i] <= 'V')
            num[i] = 8;
        else if(str[i] >= 'W' && str[i] <= 'Z')
            num[i] = 9;
    }
    int sum = 0;
    for(int i = 0 ; i < strlen(str); i++){
        sum += num[i] + 1;
    }
    printf("%d", sum);
    return 0;
}