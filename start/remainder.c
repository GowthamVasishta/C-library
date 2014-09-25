/*
 * Division operation
 * Finding the remainder on division
 */

#include<stdio.h>
void main() {
	int i,j,k;

	printf("Enter two numbers for division operation: \n");
	scanf("%d %d", &i,&j);

	if(j == 0) {
		printf("Denominator is Zero \n");
	}
	else {
		k = i%j;
		
		printf("Remainder = %d \n",k); 
	}
}
	
