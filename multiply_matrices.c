#include <stdio.h>
int main() {
    int m, n, p;
    scanf("%d %d", &m, &n);
    int matrix1[m][n];
    for (int i = 0; i < m; i++) 
        for (int j = 0; j < n; j++) scanf("%d", &matrix1[i][j]);

    scanf("%d", &p);
    int matrix2[n][p];
    for (int i = 0; i < n; i++) 
        for (int j = 0; j < p; j++) scanf("%d", &matrix2[i][j]);

    int result[m][p];
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < p; j++) {
            result[i][j] = 0;
            for (int k = 0; k < n; k++) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < p; j++) printf("%d ", result[i][j]);
        printf("\n");
    }
    return 0;
}
