#include <stdio.h>
int main() {
    float a, b;
    char op;
    scanf("%f %c %f", &a, &op, &b);
    if (op == '+') printf("%f", a + b);
    else if (op == '-') printf("%f", a - b);
    else if (op == '*') printf("%f", a * b);
    else if (op == '/') printf("%f", a / b);
    return 0;
}
