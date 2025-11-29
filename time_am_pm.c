#include <stdio.h>
#include <time.h>

int main() {
    struct tm *tm_info;
    time_t timer;
    char buffer[26];

    time(&timer);
    tm_info = localtime(&timer);

    strftime(buffer, sizeof(buffer), "%I:%M:%S %p", tm_info);  // 12-hour format with AM/PM
    printf("Current time in AM/PM format: %s\n", buffer);

    return 0;
}
