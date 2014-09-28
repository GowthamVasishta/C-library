/*
 * Swapping two variables
 * 
 * output
 * ^^^^^^
 * Before swapping: 
 * a = 10 and b = 20. 
 * After swapping: 
 * a = 20 and b = 10.
 */

#include<stdio.h>

void main() {

	int a = 10, b= 20, temp;
	printf("Before swapping: \n");
	printf("a = %d and b = %d. \n", a,b);
	
	temp = a; //at this step, temp = 10 and a = 10 and b = 20
	a = b;	  //here, temp = 10 and a = 20 and b = 20
	b = temp; // here, temp 10 and a = 20 and b = 10

	//the values are swapped between a and b
	printf("After swapping: \n");
	printf("a = %d and b = %d. \n", a,b);

} // end main

