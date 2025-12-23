#include <stdio.h>

// 1. Odd/Even check using if-else
void checkOddEven(int num) {
    if (num % 2 == 0)
        printf("%d is Even\n", num);
    else
        printf("%d is Odd\n", num);
}

// 2. Max of three numbers using nested if
int maxOfThree(int a, int b, int c) {
    if (a > b) {
        if (a > c)
            return a;
        else
            return c;
    } else {
        if (b > c)
            return b;
        else
            return c;
    }
}

// 3. Ternary operator example
int maxTernary(int a, int b) {
    return (a > b) ? a : b;
}

// 4. Switch-case calculator
void calculator(int a, int b, char op) {
    switch (op) {
        case '+':
            printf("%d + %d = %d\n", a, b, a + b);
            break;
        case '-':
            printf("%d - %d = %d\n", a, b, a - b);
            break;
        case '*':
            printf("%d * %d = %d\n", a, b, a * b);
            break;
        case '/':
            if (b != 0)
                printf("%d / %d = %d\n", a, b, a / b);
            else
                printf("Error: Division by zero\n");
            break;
        default:
            printf("Invalid operator\n");
    }
}

int main() {
    checkOddEven(10);
    checkOddEven(7);
    
    printf("Max of 5, 10, 3: %d\n", maxOfThree(5, 10, 3));
    printf("Max of 8, 3: %d\n", maxTernary(8, 3));
    
    calculator(15, 5, '+');
    calculator(15, 5, '*');
    
    return 0;
}