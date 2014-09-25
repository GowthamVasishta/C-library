/*
 * To find weather a number is positive or negative 
 */

#include<stdio.h>
void main() {
	
	int i;
	printf("Enter a number: \n");
	scanf("%d", &i);

	if(i < 0) 
		printf("Negative number \n");
	if(i > 0)
		printf("Positive number \n");
	if(i == 0)
		printf("Zero \n");
}
