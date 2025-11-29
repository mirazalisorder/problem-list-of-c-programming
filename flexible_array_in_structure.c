#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name[50];
    int age;
    float *marks;  // Flexible array member
};

int main() {
    int n;
    printf("Enter number of subjects: ");
    scanf("%d", &n);
    
    struct Student s;
    printf("Enter student name: ");
    scanf("%s", s.name);
    printf("Enter student age: ");
    scanf("%d", &s.age);

    s.marks = (float *)malloc(n * sizeof(float));  // Dynamically allocate memory for marks

    printf("Enter marks for %d subjects:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Subject %d: ", i + 1);
        scanf("%f", &s.marks[i]);
    }

    printf("\nStudent Information:\n");
    printf("Name: %s\n", s.name);
    printf("Age: %d\n", s.age);
    for (int i = 0; i < n; i++) {
        printf("Marks for Subject %d: %.2f\n", i + 1, s.marks[i]);
    }

    free(s.marks);  // Free the dynamically allocated memory
    
    return 0;
}
