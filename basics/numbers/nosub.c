/* Write a C program to subtract two numbers without using subtraction '-' operator. */

#include<stdio.h>
void main() {
   int a,b;
   int sum;
  
   printf("Enter the two numbers: \n");
   scanf("%d %d", &a, &b);

   sum = a + ~b +1;
   
   // a + (-b +1) +1
   printf("THe difference is %d \n", sum);
} 
