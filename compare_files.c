#include <stdio.h>

int main() {
    FILE *file1, *file2;
    char ch1, ch2;

    file1 = fopen("file1.txt", "r");
    file2 = fopen("file2.txt", "r");

    if (file1 == NULL || file2 == NULL) {
        printf("Error opening files.\n");
        return 1;
    }

    int line = 1, position = 1;
    while ((ch1 = fgetc(file1)) != EOF && (ch2 = fgetc(file2)) != EOF) {
        if (ch1 != ch2) {
            printf("Mismatch at Line %d, Position %d\n", line, position);
        }
        if (ch1 == '\n') line++, position = 0;
        position++;
    }

    fclose(file1);
    fclose(file2);
    return 0;
}
