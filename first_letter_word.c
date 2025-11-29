#include <stdio.h>
#include <ctype.h>
int main() {
    char str[100];
    scanf("%[^\n]s", str);

    for (int i = 0; str[i] != '\0'; i++) {
        if (i == 0 || str[i - 1] == ' ') {
            printf("%c", toupper(str[i]));
        }
    }
    return 0;
}
