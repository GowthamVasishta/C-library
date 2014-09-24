/* Write a C program to calculate pow(x,n)?  */

/* 
 *  2 power 3 = 2^3 = 2x2x2 = 8
*/

#include<stdio.h>

void main() {
   int num, pow, i, result = 1;
   printf("Enter the number: \n");
   scanf("%d", &num);
   printf("Enter the power: \n");
   scanf("%d", &pow);

   for(i=1; i<=pow; i++) {
    result = result * num;
   }

   printf(" %d ^ %d = %d \n", num, pow, result);
}
