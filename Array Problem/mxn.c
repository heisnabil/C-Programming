#include <stdio.h>

#define MAX_ROWS 10
#define MAX_COLS 10

int main() {
    int matrix[MAX_ROWS][MAX_COLS];
    int m, n;

    // Input the dimensions of the matrix
    printf("Enter the number of rows (m): ");
    scanf("%d", &m);
    printf("Enter the number of columns (n): ");
    scanf("%d", &n);

    // Input elements of the matrix
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("Enter element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }

    // Display the matrix in its natural form
    printf("The matrix in natural form:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
