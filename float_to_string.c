#include <stdio.h>
#include <stdlib.h>

int main() {
    float f;
    char str[50];
    scanf("%f", &f);
    snprintf(str, sizeof(str), "%.6f", f);  // Convert float to string
    printf("%s", str);
    return 0;
}
