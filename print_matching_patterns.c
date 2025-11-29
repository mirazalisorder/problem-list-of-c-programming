#include <stdio.h>
#include <string.h>

int main() {
    FILE *file;
    char pattern[50], line[100];

    printf("Enter pattern to search for: ");
    scanf("%s", pattern);

    file = fopen("file.txt", "r");
    if (file == NULL) {
        printf("File not found.\n");
        return 1;
    }

    while (fgets(line, sizeof(line), file)) {
        if (strstr(line, pattern)) {
            printf("Matching Line: %s", line);
        }
    }

    fclose(file);
    return 0;
}
