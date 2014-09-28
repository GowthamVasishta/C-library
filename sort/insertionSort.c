/*
 * Implementation of insertion sort
 * 
 */

#include<stdio.h>

#define MAX 30

void insertion_sort(int[], int);

void main() {

	int i, x[MAX], n;

	printf("Input the size of array \n");
	scanf("%d", &n);

	if(n>MAX) {
		printf("Input size is greater than the declared size. \n");
	}
		
	printf("Enter the numbers: \n");
	for(i=0;i<n;i++)
		scanf("%d", &x[i]);
	
	insertion_sort(x,n);

	for(i=0;i<n;i++)
		printf("%d \t", x[i]);
} //end main

void insertion_sort(int x[MAX], int n) {
	
	int d,c,t;

	for (c = 1 ; c <= n - 1; c++) {
   		 d = c;
 		// swap the values if the left values are greater than right values
    		while ( d > 0 && x[d] < x[d-1]) {
      			t = x[d];
      			x[d]   = x[d-1];
      			x[d-1] = t;
 
      			d--;
    		}
  	}
	
}
