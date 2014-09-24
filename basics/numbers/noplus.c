/* Write a C program to add two numbers without using plus '+' operator. */

#include<stdio.h>
void main() {
   int i, j, k;
  
   printf("Enter two numbers : \n");
   scanf("%d %d", &i, &j);
  
   // '~' is 1's complement operator
   // ~x = -x +1
   k = i - ~j -1;

   printf("The sum is %d \n", k); 

}

