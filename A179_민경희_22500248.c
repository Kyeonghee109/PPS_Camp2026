#include <stdio.h>

int main () {
    int BC_year, AD_year = 0;
    scanf("%d", &BC_year);
    AD_year = BC_year - 543;
    printf("%d", AD_year);
    return 0;
}