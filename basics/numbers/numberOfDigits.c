/*
 * To find number of digits in a number
 */

#include<stdio.h>

void main() {

	int i,count,t;
	//initialise count
	count = 0;
	//read a number
	printf("Enter a number :\n");
	scanf("%d", &i);
	t=i;
	while(i) {
		i = i/10;
		count++;
	}

	printf("No. of digits in %d is %d",t,count);


} //end/
