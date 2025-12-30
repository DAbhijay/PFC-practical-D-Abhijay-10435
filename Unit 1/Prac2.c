#include <stdio.h>

/* Name: Abhijay
Age: 25
ERP: 10435 */

int main() {
    int num1, num2, sum, largest;
    
    printf("Enter first number: ");
    scanf("%d", &num1);
    
    printf("Enter second number: ");
    scanf("%d", &num2);
    
    sum = num1 + num2;
    largest = (num1 > num2) ? num1 : num2;
    
    printf("Sum: %d\n", sum);
    printf("Largest: %d\n", largest);
    
    return 0;
}

/* Enter first number: 6
Enter second number: 7
Sum: 13 */