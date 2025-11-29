#include <stdio.h>
int determinant(int matrix[3][3], int n) {
    int det = 0;
    if (n == 2) {
        return matrix[0][0] * matrix[1][1] - matrix[0][1] * matrix[1][0];
    }
    for (int i = 0; i < n; i++) {
        int submatrix[2][2];
        for (int j = 1; j < n; j++) {
            int k = 0;
            for (int l = 0; l < n; l++) {
                if (l != i) {
                    submatrix[j - 1][k++] = matrix[j][l];
                }
            }
        }
        det += matrix[0][i] * (i % 2 == 0 ? 1 : -1) * determinant(submatrix, n - 1);
    }
    return det;
}
int main() {
    int matrix[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    printf("Determinant: %d", determinant(matrix, 3));
    return 0;
}
