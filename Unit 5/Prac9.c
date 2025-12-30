#include <stdio.h>

/* Name: Abhijay
Age: 25
ERP: 10435 */

void reverseArray(int arr[], int n) {
    printf("Reversed array: ");
    for (int i = n - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void findMaxMin(int arr[], int n) {
    int max = arr[0], min = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) max = arr[i];
        if (arr[i] < min) min = arr[i];
    }
    printf("Max element: %d\n", max);
    printf("Min element: %d\n", min);
}

void sumEvenElements(int arr[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            sum += arr[i];
        }
    }
    printf("Sum of even elements: %d\n", sum);
}

int main() {
    int arr[] = {15, 8, 22, 6, 9, 14, 3, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    reverseArray(arr, n);
    findMaxMin(arr, n);
    sumEvenElements(arr, n);
    
    return 0;
}

/* Reversed array: 10 3 14 9 6 22 8 15 
Max element: 22
Min element: 3
Sum of even elements: 60
*/