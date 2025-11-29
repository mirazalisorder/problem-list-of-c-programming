#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {
    char binary[50];
    scanf("%s", binary);
    int length = strlen(binary);
    int decimal = 0;

    for (int i = 0; i < length; i++) {
        if (binary[length - i - 1] == '1') {
            decimal += pow(2, i);
        }
    }
    printf("%d", decimal);  // Convert binary to decimal
    return 0;
}
