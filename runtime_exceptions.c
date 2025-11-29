#include <stdio.h>
#include <stdlib.h>

int main() {
    int num = 0;
    if (num == 0) {
        printf("Runtime Exception: Division by zero!\n");
        exit(1);  // Simulating a runtime exception (e.g., divide by zero)
    }
    return 0;
}
