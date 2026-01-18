#include <stdio.h>
#include <string.h>

int main() {
    char str[1001];
    scanf("%s",str);

    for(int i = 0 ; i < strlen(str); i++){
        str[i] = (str[i] - 'A' - 3 + 26) % 26 + 'A';
    }

    printf("%s",str);
    return 0;
}