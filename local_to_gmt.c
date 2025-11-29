#include <stdio.h>
#include <time.h>

int main() {
    time_t t;
    struct tm *tm_info;
    struct tm *gmt_info;

    time(&t);
    tm_info = localtime(&t);
    gmt_info = gmtime(&t);

    printf("Local Time: %s", asctime(tm_info));
    printf("GMT Time: %s", asctime(gmt_info));  // Convert local time to GMT
    return 0;
}
