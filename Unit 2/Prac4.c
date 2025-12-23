#include <stdio.h>

// COMPILE-TIME ERROR 1: Syntax Error - Missing semicolon
// int x = 5)

// COMPILE-TIME ERROR 2: Undeclared Variable
void example2() {
    // printf("%d\n", undeclared_var);  // undeclared_var not declared
}

// COMPILE-TIME ERROR 3: Type Mismatch
void example3() {
    // int x = "string";  // incompatible types
}

// COMPILE-TIME ERROR 4: Function not declared
void example4() {
    // undefined_function();  // function not declared
}

// COMPILE-TIME ERROR 5: Missing closing brace
// void example5() {
//     printf("test");
// missing closing brace causes error

int main() {
    // RUNTIME ERROR: Division by Zero
    int a = 10;
    int b = 0;
    int result = a / b;  // crashes at runtime
    
    printf("%d\n", result);
    return 0;
}
