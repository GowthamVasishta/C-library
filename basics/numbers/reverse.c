/* write a C program to write the reverse of a number. */
#include<stdio.h>

void main() {
  int i,j,k, result = 0;
  
 printf("Enter the number: \n");
 scanf("%d", &i);
 k = i;
 //reversing the number
 while(i) {
    j = i % 10;
    result = result * 10 + j;
    i = i / 10;
 }
 printf("The reverse of number %d is %d. \n ", k, result);
}
