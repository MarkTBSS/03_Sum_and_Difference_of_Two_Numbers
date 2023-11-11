#include <stdio.h>

int main() {
    int a = 10;
    int b = 4;
    float c = 4.0;
    float d = 2.0;

    double e = 5.12;
    double f = 6.89098;
    double g = e - f;

    int aPlusB = a + b;
    int aMinusB = a - b;
    float cPlusD = c + d;
    float cMinusD = c - d;

    printf("%d\n", aPlusB);
    printf("%d\n", aMinusB);
    printf("%.1f\n", cPlusD);
    printf("%.1f\n", cMinusD);

    printf("%f", g);

    return 0;
}