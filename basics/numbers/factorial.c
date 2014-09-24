/* Write a C program for calculating the factorial of a number.  */
#include<stdio.h>
void main() {
   int fact =1, i, x;
  
   printf("Enter the number: \n");
   scanf("%d", &i);
  
   // factorial of 4 : 4! = 1x2x3x4 = 24
   for(x=1; x<=i; x++) {
     fact = fact * x;
   }
   
   printf("THe factorial of %d is %d. \n", i, fact);
}
