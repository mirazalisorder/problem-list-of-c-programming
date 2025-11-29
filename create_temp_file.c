#include <stdio.h>

int main() {
    FILE *tempFile;
    tempFile = tmpfile();  // Creates a temporary file

    if (tempFile == NULL) {
        printf("Failed to create a temporary file.\n");
        return 1;
    }

    fprintf(tempFile, "This is a temporary file.\n");
    rewind(tempFile);

    char buffer[100];
    fscanf(tempFile, "%s", buffer);
    printf("Content of temporary file: %s\n", buffer);

    fclose(tempFile);
    return 0;
}
