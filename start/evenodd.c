/*
 * To find weather a number is even or odd
 */

#include<stdio.h>
void main() {
	int n;

	printf("Enter a number: \n");
	scanf("%d", &n);

	if(n % 2 == 0)
		printf("Even number. \n");
	else
		printf("Odd number \n");
}
