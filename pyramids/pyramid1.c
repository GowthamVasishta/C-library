/* 
 * To generate the following pyramid
 * 1
 * 22
 * 333
 * 4444
 * 55555
 */

#include<stdio.h>

void main() {
	
	int i,j,k;
	
	printf("Enter the number: \n");
	scanf("%d", &i);

	for(j=1; j<=i; j++)
 	{
		for(k=1;k<=j;k++)
			printf("%d",j);
		printf("\n");

	}
}
