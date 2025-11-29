#include <stdio.h>
#include <stdlib.h>

int main() {
    char str[50];
    scanf("%s", str);
    long num = strtol(str, NULL, 10);  // Convert string to long
    printf("%ld", num);
    return 0;
}
