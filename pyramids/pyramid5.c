/*
 * To generate following pyramid
 * 
 *      1
 *     12
 *    123
 *   1234
 *  12345
 *
 */

#include<stdio.h>

void main() {

	int n,i,j,k;

	printf("Enter a number: \n");
	scanf("%d",&n);

	for(i=1;i<=n;i++)
	{
		for(k=1;k<=n-i;k++)
			printf(" ");
		for(j=1;j<=i;j++)
			printf("%d",j);
		printf("\n");
	}
}
