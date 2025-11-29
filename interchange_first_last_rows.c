#include <stdio.h>
int main() {
    int m, n;
    scanf("%d %d", &m, &n);
    int matrix[m][n];

    for (int i = 0; i < m; i++) 
        for (int j = 0; j < n; j++) scanf("%d", &matrix[i][j]);

    for (int j = 0; j < n; j++) {
        int temp = matrix[0][j];
        matrix[0][j] = matrix[m-1][j];
        matrix[m-1][j] = temp;
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) printf("%d ", matrix[i][j]);
        printf("\n");
    }
    return 0;
}
