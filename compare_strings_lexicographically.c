#include <stdio.h>
#include <string.h>
int main() {
    char str1[100], str2[100];
    scanf("%s %s", str1, str2);
    
    int result = strcmp(str1, str2);
    if (result == 0) printf("Strings are equal");
    else if (result < 0) printf("String 1 is less than String 2");
    else printf("String 1 is greater than String 2");
    return 0;
}
