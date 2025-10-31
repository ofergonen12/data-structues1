#include <iostream>
#include "Queue.h"

void initQueue(Queue* q, unsigned int size)
{
    q->data = new unsigned int[size];
    q->size = size;
    q->front = 0;
    q->count = 0;
}
void cleanQueue(Queue* q)
{
    delete[] q->data;//deleting the array
	q->data = nullptr;//setting pointer to null
    q->size = 0;
    q->front = 0;
    q->count = 0;
}


bool isFull(Queue* s)
{
    return s->count == s->size;//checking if the count is equal to size
}

bool isEmpty(Queue* s)
{
    return s->count == 0;//checking if the count is zero
}

void enqueue(Queue* q, unsigned int newValue)
{
	int rear = (q->front + q->count) % q->size;//finding the location to insert new value
    if (isFull(q))
	{//checking if queue is full
        std::cout << "Queue is full. Cannot enter  new value." << std::endl;
    }
    else
    {
        int rear = (q->front + q->count) % q->size;//finding the location to insert new value
        q->data[rear] = newValue;//inserting new value
        q->count++;
    }
	
}

int dequeue(Queue* q)
{
    int value = q->data[q->front];//get the value at the start
    int next = q->front + 1;
    if (q == nullptr || q->count == 0)
    {//checking if the queue is empty
        std::cout << "queue is empty" << std::endl;
        return -1;
    }
    if (next >= q->size)
    {//making sure we reuse the deleted nodes
        next = 0;
    }
	q->front = next;//changing the front of the queue to the new front
    q->count--;
    return value;

}



