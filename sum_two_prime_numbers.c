#include <stdio.h>
int isPrime(int n) {
    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}
int main() {
    int n, found = 0;
    scanf("%d", &n);
    for (int i = 2; i < n; i++) {
        if (isPrime(i) && isPrime(n - i)) {
            printf("%d = %d + %d", n, i, n - i);
            found = 1;
            break;
        }
    }
    if (!found) printf("No such pair found");
    return 0;
}
