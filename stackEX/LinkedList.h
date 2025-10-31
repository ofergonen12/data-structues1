#ifndef LINKEDLIST_H
#define LINKEDLIST_H


 struct intNode
{//linked list  structure
	int data;
	struct intNode* next;	
};


void insertAtBeginning(intNode** head, int new_data);
/*
a function that inserts a new node at the beginning of a linked list.
input: pointer to head and new data
output:none
*/

void deleteHead(intNode** head);
/*
a function that deletes the head node
input: the linked list
outptut:none
*/

void printList(intNode* head);
/*
a function that prints the linked list  i created to check if everything is working fine
input: head of the linked list
output:none
*/



#endif