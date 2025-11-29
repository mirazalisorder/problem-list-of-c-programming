#include <stdio.h>
int main() {
    int n, sum = 0, square, remainder;
    scanf("%d", &n);
    square = n * n;
    while (square != 0) {
        remainder = square % 10;
        sum += remainder;
        square /= 10;
    }
    if (sum == n) printf("Neon Number");
    else printf("Not Neon Number");
    return 0;
}

