#include <stdio.h>
#include <stdlib.h>

int main() {
    char hex[50];
    scanf("%s", hex);
    int decimal = strtol(hex, NULL, 16);  // Convert hexadecimal to decimal
    printf("%d", decimal);
    return 0;
}
