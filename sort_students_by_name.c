#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int age;
    float marks;
};

void sortByName(struct Student students[], int n) {
    struct Student temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (strcmp(students[i].name, students[j].name) > 0) {
                temp = students[i];
                students[i] = students[j];
                students[j] = temp;
            }
        }
    }
}

int main() {
    int n;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    
    struct Student students[n];
    
    for (int i = 0; i < n; i++) {
        printf("\nEnter details for student %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Age: ");
        scanf("%d", &students[i].age);
        printf("Marks: ");
        scanf("%f", &students[i].marks);
    }
    
    sortByName(students, n);
    
    printf("\nSorted Student Records by Name:\n");
    for (int i = 0; i < n; i++) {
        printf("%s, %d, %.2f\n", students[i].name, students[i].age, students[i].marks);
    }
    
    return 0;
}
