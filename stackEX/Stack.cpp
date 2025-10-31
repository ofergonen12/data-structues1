#include <iostream>
#include "Stack.h"
#include "LinkedList.h"



bool isEmpty(Stack* s)
{
	return s->current_size == 0;
}

void push(Stack* s, unsigned int element)
{
	insertAtBeginning(&(s->head), element);
	s->current_size++;
}

int pop(Stack* s)
{
	if (isEmpty(s)) {
		return -1; // Stack is empty
	}
	else
	{
		intNode* temp = s->head;
		int poppedValue = temp->data;//saving the value to return
		s->head = s->head->next;//moving head to next node
		s->current_size--;
		delete temp; // delete the memory of the popped node
		return poppedValue;
	}
}

void initStack(Stack* s)
{
	s->head = nullptr;
	s->current_size = 0;
}

void cleanStack(Stack* s)
{
	intNode* current = s->head;
	intNode* nextNode = nullptr;
	while (current != nullptr) 
	{//advancing through the linked list and deleting each node
		nextNode = current->next;
		delete current;
		current = nextNode;
	}
	s->head = nullptr;
	s->current_size = 0;
}

