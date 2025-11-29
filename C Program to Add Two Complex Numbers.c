#include <stdio.h>
int main() {
    float a1, b1, a2, b2;
    scanf("%f %f", &a1, &b1);
    scanf("%f %f", &a2, &b2);
    printf("%f + %fi", a1 + a2, b1 + b2);
    return 0;
}
