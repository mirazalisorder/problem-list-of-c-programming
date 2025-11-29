#include <stdio.h>
int main() {
    int i, j, n, coef = 1;
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        for (j = 0; j < n - i - 1; j++) printf(" ");
        for (j = 0; j <= i; j++) {
            if (j == 0 || j == i) coef = 1;
            else coef = coef * (i - j + 1) / j;
            printf("%d ", coef);
        }
        printf("\n");
    }
    return 0;
}
