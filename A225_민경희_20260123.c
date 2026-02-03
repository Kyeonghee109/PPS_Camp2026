#include <stdio.h>
int main () {
    double A, B;
    scanf("%lf %lf", &A, &B);

    double n = A/B;
    printf("%.9lf",n);
    return 0;
}