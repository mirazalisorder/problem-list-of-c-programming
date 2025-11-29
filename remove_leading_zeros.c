#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    scanf("%s", str);
    int i = 0;

    while (str[i] == '0') {
        i++;
    }

    printf("%s", &str[i]);
    return 0;
}
