/*
 * Check for armstrong number
 * armstrong number = sum of cubes of each and every digit is equal to the given number
 */

#include<stdio.h>
void main()
{
	int n, r , sum=0,t;

	printf("Enter a number: \n");
	scanf("%d",&n);

	t = n;
	while(n!=0)
	{
		r = n%10;
		sum = sum+r*r*r;
		n = n/10;
	}
	
	if( t == sum)
		printf("armstrong number");
	else 
		printf("its not a armstrong number");

}
