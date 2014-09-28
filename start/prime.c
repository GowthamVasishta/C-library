/*
 * Check weather a given program is prime or not
 */

#include<stdio.h>

int main() {	

	int i=2, flag = 0,n, num;

	printf("Enter a number to be checked for prime: \n");
	scanf("%d", &num);
	
	if(num == 1) {
		printf(" 1 is neither prime nor composite. \n");
		return 0;
	}
	
	while(i<=num/2)
	{
		// if n is divisible between 2 to n/2 then make flag as 1
		if(num%i ==0) 
		{
			flag = 1;
			break;
		}
		// or else continue to check
		else
			i++;
	}
	
	//display the result
	if(flag == 0)
		printf("%d is a prime number. \n", num);
	else
		printf("%d is not a prime number. \n", num);


}
