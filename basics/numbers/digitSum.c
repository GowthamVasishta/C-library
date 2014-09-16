/* Write a C program to find the sum of digits of given number. */
#include<stdio.h>

void main() {
    int num, rem, sum = 0;

    printf("Enter the number: \n");
    scanf("%d", &num);

    while(num) {
       rem = num % 10;
       num = num / 10;
       sum = sum + rem;
    }
   
    printf("The sum of digits is %d \n", sum);
}
