/* 
 * Reading set of integers through array
 */

#include<stdio.h>
#define MAX 14

int main() {

	//declare array with size 'MAX'
	int s[MAX], i, n;

	printf("How many integers you want to enter ? \n");
	scanf("%d", &n);
	
	// check if number of elements are grater than declared size
	if(n > MAX) {
		printf("Entered valued is greater than declared size ! \n");
		return 0;
	}

	//read the values
	printf("Enter %d intergers: \n", n);
	for(i=0; i<n; i++)
		scanf("%d", &s[i]);

	//display the values
	printf("\n Entered values are: \n");
	for(i=0; i<n; i++)
		printf("%d \t", s[i]);

}//end main
