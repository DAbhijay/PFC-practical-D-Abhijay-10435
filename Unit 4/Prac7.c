#include <stdio.h>

/* Name: Abhijay
Age: 25
ERP: 10435 */

int main() {
    int n = 4;
    
    // 1. Diamond of length 2n-1
    printf("Diamond:\n");
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) printf(" ");
        for (int j = 1; j <= 2 * i - 1; j++) printf("*");
        printf("\n");
    }
    for (int i = n - 1; i >= 1; i--) {
        for (int j = 1; j <= n - i; j++) printf(" ");
        for (int j = 1; j <= 2 * i - 1; j++) printf("*");
        printf("\n");
    }
    
    printf("\n");
    
    // 2. Hourglass of length 2n-1
    printf("Hourglass:\n");
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i - 1; j++) printf(" ");
        for (int j = 1; j <= 2 * (n - i) + 1; j++) printf("*");
        printf("\n");
    }
    for (int i = n - 1; i >= 1; i--) {
        for (int j = 1; j <= i - 1; j++) printf(" ");
        for (int j = 1; j <= 2 * (n - i) + 1; j++) printf("*");
        printf("\n");
    }
    
    printf("\n");
    
    // 3. Alphabet pattern
    printf("Alphabet:\n");
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < i; j++) printf("%c", 'A' + j);
        printf("\n");
    }
    
    return 0;
}

/* Diamond:
   *
  ***
 *****
*******
 *****
  ***
   *

Hourglass:
*******
 *****
  ***
   *
  ***
 *****
*******

Alphabet:
A
AB
ABC
ABCD
*/