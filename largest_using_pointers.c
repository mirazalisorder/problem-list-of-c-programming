#include <stdio.h>

int main() {
    int arr[] = {12, 45, 23, 56, 78, 34};
    int *ptr = arr;
    int max = *ptr;

    for (int i = 1; i < 6; i++) {
        if (*(ptr + i) > max) {
            max = *(ptr + i);
        }
    }

    printf("Largest element is %d", max);
    return 0;
}
