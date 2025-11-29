#include <stdio.h>

int main() {
    int a = 10, b = 0;
    
    if (b == 0) {
        printf("Runtime Error: Division by zero.\n");
    } else {
        printf("Quotient: %d\n", a / b);
    }

    int sum = 10 + 5;
    printf("Sum is %d, but expected 15\n", sum);

    return 0;
}
