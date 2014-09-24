/*
 * Implementation of stack using array
 */

#include<stdio.h>
#include<stdlib.h>
#define MAX 100

struct stack { 
	int top;    //'top' of the stack
	int s[MAX]; // integer array 
}st;
void push(), pop(), display();

int main() {
	int x;
	st.top=0; //initialize the top

	//infinite loop
	while(1) {
		printf("\n Choose from below options \n");
		printf("1. push \n");
		printf("2. pop \n");
		printf("3. display \n");
		printf("4. exit \n");
		
		scanf("%d",&x);
		switch(x) {
			case 1: push(); break;
			case 2: pop(); break;
			case 3: display(); break;
			case 4: exit(1);
			default: printf("Invalid input \n");
		} // end switch
	}// end while
}//end main

void push() {
	int x;
	if(st.top > MAX-1) {
		printf("overflow \n"); //stack is full, cannot insert more elements
		return; //return control to previous function
	} //end if
	printf("*************** PUSH OPERATION ********************** \n");
	printf("Enter the element \n");
	scanf("%d", &x);
	st.s[st.top++] = x; // increment the 'top' and insert the value into stack
	display();
	printf("\n************************************* \n");
}// end push

void pop() {
	int x;
	if(st.top == 0) {
		printf("Underflow \n"); //no more elements in the stack
		return; //return control to previous function
	}
	x = st.s[st.top-1]; //store the value to deleted in a variable
	st.s[st.top] = 0; // clear the last entry
	st.top--; // decrement the 'top'
	printf("***************** POP OPERATION ******************** \n");
	printf("%d is deleted from the stack \n", x);
	display();
	printf("\n************************************* \n");
}//end pop

void display() {
	int x;
	printf("The elements in the array are: \n");
	for(x=0;x<st.top;x++) {
		printf("%d", st.s[x]);
		printf("|");
	}
}//end display























