#include <stdio.h>
#include <math.h>
int main() {
    int n, temp, remainder, result = 0, digits = 0;
    scanf("%d", &n);
    temp = n;
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
    if (result == n) printf("Armstrong Number");
    else printf("Not Armstrong Number");
    return 0;
}
