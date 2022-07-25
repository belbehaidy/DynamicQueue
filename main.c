/*main file to test implementation of Dynamic Queue functions*/

#include<stdio.h>

#ifndef DYNAMIC_QUEUE_C
#include "DynamicQueue.c"
#endif

#ifndef DYNAMIC_QUEUE_H
#include "DynamicQueue.h"
#endif

#define PRINT_QUEUE printf("\nFront->");\
					for(dQueue_t *ptr=Queue; ptr!=NULL ;ptr=ptr->next)\
					printf("%d->",ptr->data);\
					printf("Rear\n")\

int main(void)
{
	int status,data;
	dQueue_t *Queue;
	
	QueueInit(&Queue);

	enque(&Queue,10);
	enque(&Queue,20);
	enque(&Queue,30);
	
	PRINT_QUEUE;
	
	status=peek(Queue,&data);
	if(status) printf("\nPeeked data = %d ",data);
	else printf("\nQueue is Empty.");
	
	status=peek(Queue,&data);
	if(status) printf("\nPeeked data = %d ",data);
	else printf("\nQueue is Empty.");
	
	PRINT_QUEUE;
	
	status=deque(&Queue,&data);
	if(status) printf("\ndequed data = %d ",data);
	else printf("\nQueue is Empty.");
	
	status=deque(&Queue,&data);
	if(status) printf("\ndequed data = %d ",data);
	else printf("\nQueue is Empty.");
	
	PRINT_QUEUE;
	
	status=deque(&Queue,&data);
	if(status) printf("\ndequed data = %d ",data);
	else printf("\nQueue is Empty.");
	
	status=deque(&Queue,&data);
	if(status) printf("\ndequed data = %d ",data);
	else printf("\nQueue is Empty.");
	
	status=deque(&Queue,&data);
	if(status) printf("\ndequed data = %d ",data);
	else printf("\nQueue is Empty.");
	
	PRINT_QUEUE;
}