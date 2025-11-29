#include <stdio.h>
#include <zip.h>

int main() {
    int err = 0;
    struct zip *z = zip_open("example.zip", 0, &err);
    if (z == NULL) {
        printf("Error opening zip file.\n");
        return 1;
    }

    struct zip_file *zf = zip_fopen(z, "example.txt", 0);
    if (zf == NULL) {
        printf("Error opening file inside zip.\n");
        zip_close(z);
        return 1;
    }

    char buffer[100];
    zip_fread(zf, buffer, sizeof(buffer));
    printf("Content of file inside zip: %s\n", buffer);

    zip_fclose(zf);
    zip_close(z);
    return 0;
}
