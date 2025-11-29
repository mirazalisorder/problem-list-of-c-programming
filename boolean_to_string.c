#include <stdio.h>
#include <stdbool.h>
#include <string.h>

const char* booleanToString(bool value) {
    return value ? "True" : "False";
}

int main() {
    bool value;
    scanf("%d", &value);  // Input as 1 (True) or 0 (False)
    printf("%s", booleanToString(value));
    return 0;
}
