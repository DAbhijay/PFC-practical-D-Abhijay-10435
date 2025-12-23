#include <stdio.h>

int main() {
    // Declare variables of different types
    int num1, num2;
    float fNum;
    char ch;
    double dNum;
    
    // Input variables using scanf with format specifiers
    printf("Enter an integer: ");
    scanf("%d", &num1);
    
    printf("Enter a float: ");
    scanf("%f", &fNum);
    
    printf("Enter a character: ");
    scanf(" %c", &ch);
    
    printf("Enter a double: ");
    scanf("%lf", &dNum);
    
    printf("Enter another integer for swapping: ");
    scanf("%d", &num2);
    
    // Display original values
    printf("\n--- Original Values ---\n");
    printf("Integer 1: %d\n", num1);
    printf("Integer 2: %d\n", num2);
    printf("Float: %f\n", fNum);
    printf("Character: %c\n", ch);
    printf("Double: %lf\n\n", dNum);
    
    // Swap numbers using temporary variable
    int temp = num1;
    num1 = num2;
    num2 = temp;
    
    printf("--- After Swapping ---\n");
    printf("Integer 1: %d\n", num1);
    printf("Integer 2: %d\n\n", num2);
    
    // Introduction to pointers
    int *ptr1 = &num1;
    float *ptr2 = &fNum;
    
    printf("--- Pointers ---\n");
    printf("Address of num1: %p, Value via pointer: %d\n", (void*)ptr1, *ptr1);
    printf("Address of fNum: %p, Value via pointer: %f\n", (void*)ptr2, *ptr2);
    
    return 0;
}
