/*
 * To generate the following pyramid
 * 
 * 12345
 * 1234
 * 123
 * 12
 * 1
 */

#include<stdio.h>

void main() {
	
	int i,j,k;

	printf("Enter a number: \n");
	scanf("%d", &i);

	for(j=i;j>=1;j--)
	{
		for(k=1;k<=j;k++)
			printf("%d",k);
		printf("\n");
	}
}
