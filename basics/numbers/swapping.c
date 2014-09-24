/* Write a C program to swap two variables without using a temporary variable.  */

#include<stdio.h>

void main() {
    int a,b;
    printf("Enter the value of a:\n");
    scanf("%d", &a);
    printf("Enter the value of b: \n");
    scanf("%d", &b);
 
    printf("The values before swapping: \n");
    printf("a = %d and b = %d \n", a,b);

    //swapping the variables, using XOR operation
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;

    printf("The values after swapping: \n");
    printf("a = %d and b = %d \n", a,b);
}
