/*Dynamic Queue declerations header file*/

#define DYNAMIC_QUEUE_H

typedef struct node
{
	int data;
	struct node *next;
}dQueue_t;

void QueueInit(dQueue_t **Queue);
int isEmpty(dQueue_t *Queue);
int enque(dQueue_t **Queue,int data);
int deque(dQueue_t **Queue,int *data);
int peek(dQueue_t *Queue,int *data);