#include <stdio.h>
int main() {
    int m, n, isEqual = 1;
    scanf("%d %d", &m, &n);
    int matrix1[m][n], matrix2[m][n];
    
    for (int i = 0; i < m; i++) 
        for (int j = 0; j < n; j++) scanf("%d", &matrix1[i][j]);

    for (int i = 0; i < m; i++) 
        for (int j = 0; j < n; j++) scanf("%d", &matrix2[i][j]);

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (matrix1[i][j] != matrix2[i][j]) {
                isEqual = 0;
                break;
            }
        }
    }

    if (isEqual) printf("Matrices are equal");
    else printf("Matrices are not equal");
    return 0;
}
