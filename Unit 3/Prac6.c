#include <stdio.h>

// 1. Print numbers from a to b
void printNumbers(int a, int b) {
    printf("Numbers from %d to %d:\n", a, b);
    for (int i = a; i <= b; i++) {
        printf("%d ", i);
    }
    printf("\n\n");
}

// 2. Sum of even numbers using continue
void sumEvenNumbers(int limit) {
    int sum = 0;
    printf("Sum of even numbers from 1 to %d:\n", limit);
    for (int i = 1; i <= limit; i++) {
        if (i % 2 != 0) {
            continue;
        }
        sum += i;
    }
    printf("Sum = %d\n\n", sum);
}

// 3. ATM Pin authentication
void atmPinAuth() {
    int correctPin = 1234;
    int pin;
    int attempts = 3;
    
    printf("ATM Pin Authentication:\n");
    while (attempts > 0) {
        printf("Enter PIN (Attempts left: %d): ", attempts);
        scanf("%d", &pin);
        
        if (pin == correctPin) {
            printf("Access Granted!\n\n");
            return;
        } else {
            attempts--;
            if (attempts > 0) {
                printf("Incorrect PIN. Try again.\n");
            }
        }
    }
    printf("Account Locked!\n\n");
}

int main() {
    printNumbers(1, 10);
    sumEvenNumbers(20);
    atmPinAuth();
    
    return 0;
}
