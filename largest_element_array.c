#include <stdio.h>
int main() {
    int n, largest;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
    largest = arr[0];
    for (int i = 1; i < n; i++) if (arr[i] > largest) largest = arr[i];
    printf("%d", largest);
    return 0;
}
