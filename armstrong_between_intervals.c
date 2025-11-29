#include <stdio.h>
#include <math.h>
int main() {
    int start, end, n, temp, remainder, result, digits;
    scanf("%d %d", &start, &end);
    for (n = start; n <= end; n++) {
        temp = n;
        result = 0;
        digits = 0;
        while (temp != 0) {
            temp /= 10;
            digits++;
        }
        temp = n;
        while (temp != 0) {
            remainder = temp % 10;
            result += pow(remainder, digits);
            temp /= 10;
        }
        if (result == n) printf("%d ", n);
    }
    return 0;
}
