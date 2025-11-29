#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x = 5, y = 10;
    printf("Before Swap: x = %d, y = %d\n", x, y);
    swap(&x, &y);  // Passing the addresses of x and y
    printf("After Swap: x = %d, y = %d", x, y);
    return 0;
}
