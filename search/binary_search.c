/*
 * Implementation of Binary search
 */

#include<stdio.h>
#define MAX 100

int binary_search(int , int[], int);

int main() {
	int A[MAX],N,KEY,i,loc;
	printf("Enter the total number number of elements \n");
	scanf("%d", &N);

	if(N > MAX) {
		printf("Input size is greater than declared size \n");
		return 0;
	}

	printf("Enter the elements the in ascending order :\n");
	for(i=0; i<N; i++)
		scanf("%d", &A[i]);
	
	printf("Enter the element which is to be search \n");
	scanf("%d", &KEY);

	loc = binary_search(N, A, KEY);

	if(loc == -1)
		printf("Element %d is not found ! \n", KEY);
	else 
		printf("Element %d is found at %d position. \n", KEY, loc+1);
}

int binary_search(int N, int A[MAX], int KEY)
{
	int mid, low, high;

	low = 0;
	high = N-1;

	while(low <= high) 
	{
		mid = (low + high)/2;
		
		if(KEY == A[mid])
			return mid;
		else {
			if(KEY < A[mid])
				high = mid-1;
			else 
				low = mid+1;
		}
	}
	return -1;
}
