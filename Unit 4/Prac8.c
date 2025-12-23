#include <stdio.h>

// 1. Function to sum digits of a number
int sumOfDigits(int n) {
    int sum = 0;
    n = (n < 0) ? -n : n;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

// 2. Function to swap two numbers using pass by reference
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// 3. Function to print right angle triangle of stars
void printTriangle(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < i; j++) {
            printf("*");
        }
        printf("\n");
    }
}

int main() {
    // Test sumOfDigits
    printf("Sum of digits of 4123: %d\n", sumOfDigits(4123));
    
    // Test swap
    int x = 5, y = 10;
    printf("Before swap: x = %d, y = %d\n", x, y);
    swap(&x, &y);
    printf("After swap: x = %d, y = %d\n", x, y);
    
    // Test printTriangle
    printf("Triangle of height 5:\n");
    printTriangle(5);
    
    return 0;
}
