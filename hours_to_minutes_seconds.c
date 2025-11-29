#include <stdio.h>

int main() {
    int hours, minutes, seconds;

    printf("Enter time in hours: ");
    scanf("%d", &hours);

    minutes = hours * 60;
    seconds = hours * 3600;

    printf("%d hour(s) = %d minute(s) = %d second(s)\n", hours, minutes, seconds);
    return 0;
}
