/*
 * Operarion on characters
 * convert lowecase to uppercase
 */

#include<stdio.h>
void main() {

	char char1,char2;

	printf("enter a character: \n");
	scanf("%c", &char1);

	char2 = char1 - 32;

	printf("Uppercase of %c is %c. \n", char1, char2);
}
