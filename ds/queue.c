/*
 * Queue through array
 */

#include<stdio.h>
#include<stdlib.h>
#define MAX 5

struct queue 
{
	int front;
	int rear;
	int element[MAX];
} q;

void insert(), delete(), display();

int main() 
{
	
	int x;
	//initialize rear and front as zero 
	q.rear =0;q.front = 0;
	
	while(1) {
		printf("Enter the choice: \n");
		printf("1. Enter an element \n");
		printf("2. Delete an element \n");
		printf("3. Display \n");
		printf("4. Exit \n");
		scanf("%d", &x);

		switch(x) {
			case 1: insert(); break;
			case 2: delete(); break;
			case 3: display(); break;
			case 4: return 0; break;
			default: printf("Invalid Input !");
		}
	}



}//end main

void insert() {
	int item;
	int i;
	//if queue is full , then do not insert any
	if(q.front == 0 && q.rear == MAX) {
		printf("queue is full \n");
		return;
	}
	// move all elements towards front when there is no space towards rear side
	if(q.rear == MAX) {
		for(i=q.front; i<q.rear;i++)
			q.element[i-q.front] = q.element[i];
		q.rear = q.rear - q.front;
		q.front = 0;
			
	}
	// Insert the element from rear
	printf("Enter the element:");
	scanf("%d", &item);
	

	q.element[q.rear++] = item;

}// end insert

void delete() {
	//check weather the queue is empty
	if(q.rear == q.front)
	{
		printf("Queue is empty \n");
		return;
	}
	// delete the element from front side
	q.element[q.front++] = 0; 
	printf("Item deleted \n");
}//end delete

void display() {

	int i;
	//check for underflow
	if(q.rear == q.front) {
		printf("Queue is empty. No elements to display. \n");
		return;
	} 
	// display the elements
	printf("The elements in the queue are :\n");
	for(i=q.front; i< q.rear; i++)
		printf("%d", q.element[i]);

}//end display








