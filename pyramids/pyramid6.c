/*
 * To generate the following pyramid
 *
 *      1
 *     123
 *    12345
 *   1234567
 *  123456789
 *
 */
#include<stdio.h>

void main() {


	int n,i,j,k;

	printf("Enter a number: \n");
	scanf("%d", &n);

	for(i=1;i<=n;i++)
	{
		for(k=1;k<=n-i;k++)
			printf(" ");
		for(j=1;j<=2*i-1;j++)
			printf("%d",j);
		printf("\n");
	}
}
