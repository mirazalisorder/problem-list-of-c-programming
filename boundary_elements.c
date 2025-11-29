#include <stdio.h>
int main() {
    int m, n;
    scanf("%d %d", &m, &n);
    int matrix[m][n];

    for (int i = 0; i < m; i++) 
        for (int j = 0; j < n; j++) scanf("%d", &matrix[i][j]);

    for (int i = 0; i < n; i++) printf("%d ", matrix[0][i]); 
    for (int i = 1; i < m; i++) printf("%d ", matrix[i][n-1]); 
    for (int i = n-2; i >= 0; i--) printf("%d ", matrix[m-1][i]); 
    for (int i = m-2; i > 0; i--) printf("%d ", matrix[i][0]); 
    
    return 0;
}
