#include <stdio.h>
int main() {
    int i, j, n, num = 1, totalNumbers;
    scanf("%d", &n);
    totalNumbers = (n * (n + 1)) / 2;
    for (i = totalNumbers; i >= 1; i--) {
        printf("%d ", i);
        if ((i - (totalNumbers - n)) % n == 0) {
            printf("\n");
            n--;
        }
    }
    return 0;
}
