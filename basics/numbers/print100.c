/* Write a program to print numbers from 1 to 100 without using loops */
#include<stdio.h>

int main() {
   int num=1;
   //function to display the numbers from 1 to 100
   display(num);

   return 0;
}

int display(num) {
    if(num <= 100) {
        printf("%d \t", num);
        display(num+1);
    }
}
