#include <stdio.h>
#include <ctype.h>
int main() {
    char str[100];
    int alphabet[26] = {0};
    int i, index;

    scanf("%[^\n]s", str);  // Input a line of text
    for (i = 0; str[i] != '\0'; i++) {
        if (isalpha(str[i])) {
            index = tolower(str[i]) - 'a';
            alphabet[index] = 1;
        }
    }

    for (i = 0; i < 26; i++) {
        if (alphabet[i] == 0) {
            printf("Not a Pangram");
            return 0;
        }
    }
    printf("Pangram");
    return 0;
}
