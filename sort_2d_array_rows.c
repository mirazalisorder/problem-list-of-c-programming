#include <stdio.h>
void sortRow(int arr[], int n) {
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}
int main() {
    int m, n;
    scanf("%d %d", &m, &n);
    int arr[m][n];
    for (int i = 0; i < m; i++) 
        for (int j = 0; j < n; j++) scanf("%d", &arr[i][j]);

    for (int i = 0; i < m; i++) sortRow(arr[i], n);

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) printf("%d ", arr[i][j]);
        printf("\n");
    }
    return 0;
}
