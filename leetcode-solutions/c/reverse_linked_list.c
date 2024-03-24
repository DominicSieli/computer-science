#include <stdlib.h>

struct node
{
	int data;
	struct node* next;
};

struct node* reverse_linked_list(struct node* head)
{
	struct node* next = NULL;
	struct node* current = head;
	struct node* previous = NULL;

	while(current != NULL)
	{
		next = current->next;
		current->next = previous;
		previous = current;
		current = next;
	}

	return previous;
}