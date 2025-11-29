#include <stdio.h>
int main() {
    int n, i, isPrime = 1;
    scanf("%d", &n);
    for (i = 2; i <= n / 2; i++) {
        if (n % i == 0) {
            isPrime = 0;
            break;
        }
    }
    if (isPrime && n > 1) printf("Prime");
    else printf("Not Prime");
    return 0;
}
