#include <stdio.h>
#include <stdlib.h>

int main() {
    double d;
    char str[50];
    scanf("%lf", &d);
    snprintf(str, sizeof(str), "%.6lf", d);  // Convert double to string
    printf("%s", str);
    return 0;
}
