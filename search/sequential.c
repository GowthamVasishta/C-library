/*
 * Implementation of sequential search
 * (checking the given element with various element of given array, one by one)
 */

#include<stdio.h>
#define MAX 100

int main() {
	int A[MAX], N, ITEM, i;
	
	printf("Enter total number of elements");
	scanf("%d", &N);

	if(N > MAX) {
		printf("Input size is greater than declared size \n");
		return 0;
	}

	for(i=0; i<N; i++)  
		scanf("%d", &A[i]);

	printf("Enter the element which has to be searched: ");
	scanf("%d", &ITEM);

	for(i=0; i<N; i++)
	{
		if(A[i] == ITEM) {
			printf("Element %d found at %d position. \n",ITEM,i+1);
		}
		if(i == N-1 && A[i] != ITEM) 
			printf("Element %d not found !\n", ITEM);
	}
} 
