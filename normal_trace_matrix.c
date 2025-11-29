#include <stdio.h>
#include <math.h>
int main() {
    int m, n;
    scanf("%d %d", &m, &n);
    int matrix[m][n];
    int trace = 0, sum = 0;

    for (int i = 0; i < m; i++) 
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
            if (i == j) trace += matrix[i][j];
            sum += matrix[i][j] * matrix[i][j];
        }

    double normal = sqrt(sum);
    printf("Trace: %d\n", trace);
    printf("Normal: %.2f", normal);
    return 0;
}
