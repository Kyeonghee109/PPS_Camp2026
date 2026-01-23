#include <stdio.h>

int main () {
    int n1, n2;
    scanf("%d %d", &n1, &n2);

    int n3 = n1 * (n2 % 10);
    n2 = n2 / 10;
    printf("%d\n", n3);

    int n4 = n1 * (n2 % 10);
    n2 = n2 / 10;
    printf("%d\n", n4);

    int n5 = n1 * (n2 % 10);
    printf("%d\n", n5);

    int sum = n3 + n4 * 10 + n5 * 100;
    printf("%d\n", sum);

    return 0;
}