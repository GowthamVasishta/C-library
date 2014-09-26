/*
 * To print the following pyramid
 * 
 * 54321
 * 4321
 * 321
 * 21
 * 1
 */

#include<stdio.h>

void main() {

	int i,j,k;

	printf("Enter a number:\n");
	scanf("%d",&i);

	for(j=i; j>=1;j--)
	{
		for(k=j; k>=1; k--)
			printf("%d", k);
		printf("\n");
	}
}
