#include <stdio.h>
int main() {
    int m, n, sum1 = 0, sum2 = 0;
    scanf("%d %d", &m, &n);
    int matrix[m][n];

    for (int i = 0; i < m; i++) 
        for (int j = 0; j < n; j++) scanf("%d", &matrix[i][j]);

    for (int i = 0; i < m; i++) {
        sum1 += matrix[i][i]; // Primary diagonal
        sum2 += matrix[i][n - i - 1]; // Secondary diagonal
    }

    printf("Sum of Primary Diagonal: %d\n", sum1);
    printf("Sum of Secondary Diagonal: %d\n", sum2);
    return 0;
}
