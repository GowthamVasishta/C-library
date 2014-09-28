/*
 * To check weather a given number is palindrome or not
 */
#include<stdio.h>
void main() {

	int i, derived, rem,temp;
	//initialise derived
	derived = 0;
	printf("Enter the number :\n");
	scanf("%d", &i);

	temp = i;
	while(i) {
		rem = i % 10;
		i = i / 10;
		derived = derived * 10 + rem;
	}
	if(temp == derived)
		printf("%d is a palindrome number. \n", derived);
	else
		printf("%d is not a palindrome number. \n", temp);

}//end main
