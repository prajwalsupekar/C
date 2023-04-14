#include <stdio.h>
 
int main() {
    int a, b, c;
     
    printf("Enter first  number : ", a);
    scanf("%d", &a);
     
    printf("Enter second number : ", b);
    scanf("%d", &b);
     
    //add two numbers
    c = a + b;
    printf("Sum : %d", c);
     
    return 0;
}