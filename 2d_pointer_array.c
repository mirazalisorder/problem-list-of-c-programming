#include <stdio.h>

int main() {
    int *arr[3];  // Array of 3 pointers
    int row1[] = {1, 2, 3};
    int row2[] = {4, 5, 6};
    int row3[] = {7, 8, 9};

    arr[0] = row1;
    arr[1] = row2;
    arr[2] = row3;

    // Print the elements of the 2D array using the pointers
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
