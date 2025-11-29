#include <stdio.h>
void rotateMatrix(int matrix[][100], int m, int n) {
    int temp[m][n];
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            temp[j][m - i - 1] = matrix[i][j];
        }
    }
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            matrix[i][j] = temp[i][j];
        }
    }
}
int main() {
    int m, n;
    scanf("%d %d", &m, &n);
    int matrix[m][n];
    
    for (int i = 0; i < m; i++) 
        for (int j = 0; j < n; j++) scanf("%d", &matrix[i][j]);

    rotateMatrix(matrix, m, n);
    
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) printf("%d ", matrix[i][j]);
        printf("\n");
    }
    return 0;
}
