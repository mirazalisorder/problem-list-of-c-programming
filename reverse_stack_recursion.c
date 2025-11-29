#include <stdio.h>
#define MAX 100
int stack[MAX];
int top = -1;

void push(int value) {
    if (top == MAX - 1) {
        printf("Stack Overflow\n");
        return;
    }
    stack[++top] = value;
}

int pop() {
    if (top == -1) {
        printf("Stack Underflow\n");
        return -1;
    }
    return stack[top--];
}

void reverse() {
    if (top == -1) return;
    int temp = pop();
    reverse();
    printf("%d ", temp);
}

int main() {
    int n, value;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &value);
        push(value);
    }
    reverse();
    return 0;
}
