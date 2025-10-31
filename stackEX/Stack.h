#ifndef STACK_H
#define STACK_H

#include "LinkedList.h"

/* a positive-integer value stack, with no size limit */
typedef struct Stack
{
	intNode* head;
	unsigned int current_size;
} Stack;

void push(Stack* s, unsigned int element);
/*
a function that adds an element to the top of the stack
input: pointer to the stack and the element to add
output: none
*/
int pop(Stack* s); // Return -1 if stack is empty
/*
a function that delets the top element from the stack and returns its value
input: pointer to the stack
output: the value of the deleted element or -1 if the stack is empty
*/

void initStack(Stack* s);
/*
a function that initializes the stack
input: pointer to the stack
output: none
*/
void cleanStack(Stack* s);
/*
a function that cleand the stack
input: pointer to the stack
output: none
*/
bool isEmpty(Stack* s);
/*
a function that checks if the stack is empty
input: pointer to the stack
output: true if the stack is empty false if not
*/

bool isFull(Stack* s);//i didnt make this function becuse the stack has no size limit

#endif // STACK_H