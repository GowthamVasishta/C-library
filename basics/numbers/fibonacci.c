/* How to generate fibonacci numbers? */

#include<stdio.h>

void main() {
   int i = 0, j = 1, k, m;
   printf("The fibonacci series is as follow: \n");
   printf("%d \t %d \t", i, j);
   for(k=1; k<= 10; k++) {
	i = i+j;
        printf("%d \t", i);	
        m = j;
        j = i;
        i = m;
   }
}
   
