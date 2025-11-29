#include <stdio.h>
int main() {
    int n, j = 0;
    scanf("%d", &n);
    int arr[n], result[n];
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
    
    result[j++] = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] != arr[i - 1]) result[j++] = arr[i];
    }
    
    for (int i = 0; i < j; i++) printf("%d ", result[i]);
    return 0;
}
