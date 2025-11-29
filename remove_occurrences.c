#include <stdio.h>
int main() {
    int n, key;
    scanf("%d", &n);
    int arr[n], j = 0;
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
    scanf("%d", &key);
    
    for (int i = 0; i < n; i++) {
        if (arr[i] != key) arr[j++] = arr[i];
    }
    
    for (int i = 0; i < j; i++) printf("%d ", arr[i]);
    return 0;
}
