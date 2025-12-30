#include <stdio.h>
/* Name: Abhijay
Age: 25
ERP: 10435 */
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

/* Enter an integer: 5
Enter a float: 3.14
Enter a character: A
Enter a double: 5.69
Enter another integer for swapping: 24

--- Original Values ---
Integer 1: 5
Integer 2: 24
Float: 3.140000
Character: A
Double: 5.690000

--- After Swapping ---
Integer 1: 24
Integer 2: 5

--- Pointers ---
Address of num1: 0061FF10, Value via pointer: 24
Address of fNum: 0061FF08, Value via pointer: 3.140000 */