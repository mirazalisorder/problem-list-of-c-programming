#include <stdio.h>
#include <time.h>

int main() {
    struct tm date = {0};
    char buffer[80];
    
    for (int i = 1; i <= 12; i++) {
        date.tm_year = 2022 - 1900;
        date.tm_mon = i - 1;
        date.tm_mday = 1;

        mktime(&date); // Normalize the date structure
        strftime(buffer, sizeof(buffer), "%B %d, %Y", &date);  // Full date format
        printf("First day of month %d: %s\n", i, buffer);
    }

    return 0;
}
