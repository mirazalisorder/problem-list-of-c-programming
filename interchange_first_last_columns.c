#include <stdio.h>
int main() {
    int m, n;
    scanf("%d %d", &m, &n);
    int matrix[m][n];

    for (int i = 0; i < m; i++) 
        for (int j = 0; j < n; j++) scanf("%d", &matrix[i][j]);

    for (int i = 0; i < m; i++) {
        int temp = matrix[i][0];
        matrix[i][0] = matrix[i][n-1];
        matrix[i][n-1] = temp;
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) printf("%d ", matrix[i][j]);
        printf("\n");
    }
    return 0;
}
