#include <stdio.h>

/* Name: Abhijay
Age: 25
ERP: 10435 */

int main() {
    int rows, cols;
    
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);
    
    int arr[rows][cols];
    
    printf("Enter array elements:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    
    // Find max and min
    int max = arr[0][0], min = arr[0][0];
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (arr[i][j] > max) max = arr[i][j];
            if (arr[i][j] < min) min = arr[i][j];
        }
    }
    printf("\nMax: %d, Min: %d\n", max, min);
    
    // Diagonal sum (for square matrices)
    if (rows == cols) {
        int diagSum = 0;
        for (int i = 0; i < rows; i++) {
            diagSum += arr[i][i];
        }
        printf("Diagonal Sum: %d\n", diagSum);
    }
    
    // Row-wise sum
    printf("Row-wise Sum:\n");
    for (int i = 0; i < rows; i++) {
        int rowSum = 0;
        for (int j = 0; j < cols; j++) {
            rowSum += arr[i][j];
        }
        printf("Row %d: %d\n", i + 1, rowSum);
    }
    
    return 0;
}

/* Enter array elements:
7
1
2
3
4
5

Max: 7, Min: 1
Row-wise Sum:
Row 1: 10
Row 2: 12
*/