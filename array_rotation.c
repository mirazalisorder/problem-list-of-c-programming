#include <stdio.h>
void rotateArray(int arr[], int n, int d) {
    for (int i = 0; i < d; i++) {
        int temp = arr[0];
        for (int j = 0; j < n - 1; j++) arr[j] = arr[j + 1];
        arr[n - 1] = temp;
    }
}
int main() {
    int n, d;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
    scanf("%d", &d);
    
    rotateArray(arr, n, d);
    
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);
    return 0;
}
