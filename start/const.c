/*
 * usuage of 'const' keyword
 * The value of the varible get fixed upon making it as constant
 */

#include<stdio.h>
void main() {

	const int i = 10;
	
	printf("The value of i  = %d, \n",i);
	
	// on changing the value of i in some part of the program
	// like, i= 20;
	//then , its gives a error on compilation , saying "error: assignment of read-only variable ‘i’"
	
}
