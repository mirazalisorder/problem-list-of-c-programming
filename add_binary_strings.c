#include <stdio.h>
#include <string.h>
int main() {
    char bin1[100], bin2[100], result[101];
    int i, carry = 0, sum;
    scanf("%s %s", bin1, bin2);
    int len1 = strlen(bin1);
    int len2 = strlen(bin2);
    int max_len = (len1 > len2) ? len1 : len2;

    for (i = 0; i < max_len; i++) {
        sum = carry;
        if (i < len1) sum += bin1[len1 - i - 1] - '0';
        if (i < len2) sum += bin2[len2 - i - 1] - '0';
        result[max_len - i] = (sum % 2) + '0';
        carry = sum / 2;
    }
    if (carry) result[0] = '1';
    else for (i = 0; i <= max_len; i++) result[i] = result[i + 1];
    printf("%s", result);
    return 0;
}
