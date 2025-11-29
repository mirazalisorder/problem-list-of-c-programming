#include <stdio.h>

int* returnPointer() {
    static int num = 10; 
    return &num;
}

int main() {
    int *ptr = returnPointer();
    printf("%d", *ptr);  
    return 0;
}
