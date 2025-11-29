#include <stdio.h>
int main() {
    int n, temp, reversed = 0;
    scanf("%d", &n);
    temp = n;
    while (temp != 0) {
        reversed = reversed * 10 + temp % 10;
        temp /= 10;
    }
    if (reversed == n) printf("Palindrome");
    else printf("Not Palindrome");
    return 0;
}
