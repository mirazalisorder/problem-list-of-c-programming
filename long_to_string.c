#include <stdio.h>
#include <stdlib.h>

int main() {
    long num;
    char str[50];
    scanf("%ld", &num);
    snprintf(str, sizeof(str), "%ld", num);  // Convert long to string
    printf("%s", str);
    return 0;
}
