#include <stdio.h>
#include <string.h>
int main() {
    char str1[100], str2[100];
    int pos;
    scanf("%s", str1);
    scanf("%s", str2);
    scanf("%d", &pos);

    char result[200];
    int i = 0, j = 0;
    while (i < pos) {
        result[i] = str1[i];
        i++;
    }

    while (str2[j] != '\0') {
        result[i] = str2[j];
        i++;
        j++;
    }

    while (str1[i - j] != '\0') {
        result[i] = str1[i - j];
        i++;
    }

    result[i] = '\0';
    printf("%s", result);
    return 0;
}
