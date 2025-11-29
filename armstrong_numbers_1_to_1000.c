#include <stdio.h>
#include <math.h>
int main() {
    int n, temp, remainder, result, digits;
    for (n = 1; n <= 1000; n++) {
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
