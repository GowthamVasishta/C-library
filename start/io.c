/*
 * Basic i/o operation
 * Taking a number from the user and priting it back to screen
 */
#include<stdio.h> 
void main() {
	int i;

	printf("Enter the number: \n");
	scanf("%d", &i);

	printf("Entered number : %d \n", i);
}
