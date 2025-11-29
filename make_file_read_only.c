#include <stdio.h>
#include <sys/stat.h>

int main() {
    if (chmod("file.txt", S_IRUSR | S_IRGRP | S_IROTH) == 0) {
        printf("File made read-only successfully.\n");
    } else {
        printf("Error making file read-only.\n");
    }
    return 0;
}
