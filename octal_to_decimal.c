#include <stdio.h>
#include <stdlib.h>

int main() {
    char octal[50];
    scanf("%s", octal);
    int decimal = strtol(octal, NULL, 8);  // Convert octal to decimal
    printf("%d", decimal);
    return 0;
}
