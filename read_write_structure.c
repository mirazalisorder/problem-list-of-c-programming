#include <stdio.h>

struct Student {
    char name[50];
    int age;
    float marks;
};

int main() {
    struct Student s1 = {"John", 20, 85.5};
    struct Student s2;
    
    FILE *file = fopen("student.dat", "wb");
    if (file == NULL) {
        printf("Error opening file!");
        return 1;
    }
    fwrite(&s1, sizeof(struct Student), 1, file);
    fclose(file);

    file = fopen("student.dat", "rb");
    if (file == NULL) {
        printf("Error opening file!");
        return 1;
    }
    fread(&s2, sizeof(struct Student), 1, file);
    fclose(file);
    
    printf("Read from file: %s, %d, %.2f\n", s2.name, s2.age, s2.marks);
    
    return 0;
}
