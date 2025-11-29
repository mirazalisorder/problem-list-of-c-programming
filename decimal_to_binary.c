#include <stdio.h>

void decimalToBinary(int n) {
    if (n > 1) {
        decimalToBinary(n / 2);
    }
    printf("%d", n % 2);
}

int main() {
    int decimal;
    scanf("%d", &decimal);
    decimalToBinary(decimal);  // Convert decimal to binary
    return 0;
}
