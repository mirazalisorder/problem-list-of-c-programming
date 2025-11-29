#include <stdio.h>

int main() {
    FILE *file = fopen("print_source_code.c", "r");
    char ch;

    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    while ((ch = fgetc(file)) != EOF) {
        putchar(ch); 
    }

    fclose(file);
    return 0;
}
