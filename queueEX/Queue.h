#ifndef QUEUE_H
#define QUEUE_H


/* a queue contains positive integer values. */
typedef struct Queue
{
	unsigned int* data;
	unsigned int size;
	int front;
	int rear;
	unsigned int count;
} Queue;

void initQueue(Queue* q, unsigned int size);
/*
a function to initialize a queue of a given size.
input: the queue and the size
output: none
*/
void cleanQueue(Queue* q);
/*
a function to clean up the queue.
input: the queue
output: none
*/
void enqueue(Queue* q, unsigned int newValue);
/*
a function to add a new value to the end of the queue.
input: the queue and the new value
output: none
*/
int dequeue(Queue* q); // return element in top of queue, or -1 if empty
/*
a function to remove and return the value at the front of the queue.
input: the queue
output: the value at the front of the queue, or -1 if the queue is empty
*/

bool isEmpty(Queue* s);
/*
a function to check if the queue is empty.
input: the queue
output: true if the queue is empty false if not
*/ 
bool isFull(Queue* s);
/*
a function to check if the queue is full.
input: the queue
output: true if the queue is full false if not
*/

#endif /* QUEUE_H */