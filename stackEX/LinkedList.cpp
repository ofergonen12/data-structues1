#include <iostream>
#include "LinkedList.h"


int main()
{//testing the functions
    intNode* head = nullptr;
    insertAtBeginning(&head, 10);
    insertAtBeginning(&head, 20);
    insertAtBeginning(&head, 30);
    std::cout << "Linked list after inserting nodes at the beginning: ";
    printList(head);
    deleteHead(&head);
    std::cout << "Linked list after deleting the head node: ";
    printList(head);
    return 0;
}




void insertAtBeginning(intNode** head, int new_data)
{
    intNode* new_node = new intNode;// Allocate a new node
    new_node->data = new_data;
    new_node->next = *head; // link to previous first node
    *head = new_node;// Update head to point to the new node
}

void deleteHead(intNode** head)
{
	intNode* temp = *head; // Store the current head
    if (temp == nullptr)
    {
		std::cout << "List is empty, nothing to delete." << std::endl;
    }
    else
    {
        *head = temp->next; // Update head to the next node
        delete temp; // Free memory of the old head
    }
   
}

void printList(intNode* head)
{
	intNode* current = head;
    while (current != nullptr)
	{//printing every node in the linked list
        std::cout << current->data << " ";
        current = current->next;
    }
	std::cout << std::endl;//ending the line
}

