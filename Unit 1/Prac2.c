#include <stdio.h>

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
