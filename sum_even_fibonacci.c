#include <stdio.h>
int main() {
    int n, a = 0, b = 1, c, sum = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        c = a + b;
        if (i % 2 == 0) sum += c;
        a = b;
        b = c;
    }
    printf("%d", sum);
    return 0;
}
