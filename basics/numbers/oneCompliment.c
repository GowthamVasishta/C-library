/*
 * Understanding 1's compliment operator ( ~ ) in C language
 *
 */

#include<stdio.h>

void main() {

	int i,j,k;
	i= 4;
	k = 5;
	// performing 1's compliment on i
	j = ~i;
       
	// the value of j = -5
	printf("%d",j);
	
	//if we add 1 to 1's compliment
	j = ~i+1;

	// the value of j = -4
	//Therefore, ~i+1 = -i
	printf("%d",j);


	// Now to add numbers without '+'operator,  we can take help of above logic
	// Thefore, -i = ~i+1
	// so, k + i = k - (-i) = k - (~i +1) = k - ~i - 1
}
