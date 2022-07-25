/*Implementation of Dynamic Queue header file functions*/

#define DYNAMIC_QUEUE_C

#include <stdlib.h>

#ifndef DYNAMIC_QUEUE_H
#include "DynamicQueue.h"
#endif

void QueueInit(dQueue_t **Queue)
{
	(*Queue)=NULL;
}

int isEmpty(dQueue_t *Queue)
{
	return (Queue==NULL);
}
int enque(dQueue_t **Queue,int data)
{
	int status =1;
	
	dQueue_t *new=(dQueue_t *)malloc(sizeof(dQueue_t));
	if(new != NULL)
	{
		new->data = data;/*saves data in the new node*/
		new->next=NULL;/*terminates the new node*/
		
		if(isEmpty(*Queue))/*If Queue is empty, assign the Queue pointer to new node*/
				(*Queue)=new;
		else
		{
			dQueue_t *current=(*Queue);
			for(;current->next != NULL;current=current->next);/*traverse to the last node*/
			current->next=new;/*add the new node to the list*/
		}
	}
	else status = 0;
	return status;
}
int deque(dQueue_t **Queue,int *data)
{
	int status =1;
	if(!isEmpty(*Queue))
	{
		*data = (*Queue)->data;
		dQueue_t *current= (*Queue);
		*Queue =(*Queue)->next;
		free(current);
	}
	else status = 0;
	return status;
}
int peek(dQueue_t *Queue,int *data)
{
	int status =1;
	if(!isEmpty(Queue))
	{
		*data = Queue->data;
	}
	else status = 0;
	return status;
}