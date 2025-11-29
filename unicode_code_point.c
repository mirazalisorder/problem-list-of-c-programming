#include <stdio.h>
int main() {
    char str[100];
    int index;
    scanf("%s", str);
    scanf("%d", &index);

    if (index >= 0 && str[index] != '\0') {
        printf("Unicode code point: %d", str[index]);
    } else {
        printf("Invalid index");
    }
    return 0;
}
