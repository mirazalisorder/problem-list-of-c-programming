#include <stdio.h>
#include <time.h>

int main() {
    struct tm *tm_info;
    time_t timer;
    char buffer[9];

    time(&timer);
    tm_info = localtime(&timer);

    strftime(buffer, sizeof(buffer), "%H:%M:%S", tm_info);  // 24-hour format
    printf("Current time: %s\n", buffer);

    return 0;
}
