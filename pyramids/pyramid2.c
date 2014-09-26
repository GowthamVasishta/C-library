/*
 * To print the following pyramids
 * 
 * 1
 * 123
 * 1234
 * 12345
 */

#include<stdio.h>

void main() {
	int i,j,k;

	printf("Enter a number: \n");
	scanf("%d", &i);

	for(j=0;j<=i;j++)
	{
		for(k=1;k<=j;k++)
			printf("%d", k);
		printf("\n");
	}

}
