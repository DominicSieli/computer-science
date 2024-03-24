#include <stdio.h>
#include <stdlib.h>

struct node
{
	int data;
	struct node* next;
};

struct node* add_two_numbers(struct node* list_1, struct node* list_2)
{
	int carry = 0;
	struct node* node_1 = list_1;
	struct node* node_2 = list_2;
	struct node* list = malloc(sizeof(struct node));
	struct node* pointer = list;

	while(node_1 != NULL || node_2 != NULL)
	{
		int x = (node_1 != NULL) ? node_1->data : 0;
		int y = (node_2 != NULL) ? node_2->data : 0;
		int sum = carry + x + y;

		carry = sum / 10;
		pointer->next = malloc(sizeof(struct node));
		pointer->next->data = sum % 10;
		pointer = pointer->next;

		if(node_1 != NULL) node_1 = node_1->next;
		if(node_2 != NULL) node_2 = node_2->next;
	}

	if(carry > 0)
	{
		pointer->next = malloc(sizeof(struct node));
		pointer->next->data = carry;
	}

	return list->next;
}

int main()
{
	struct node* sum;
	struct node* pointer;
	struct node* list_1 = malloc(sizeof(struct node));
	struct node* list_2 = malloc(sizeof(struct node));

	int node = 0;
	pointer = list_1;

	while(node < 8)
	{
		node++;
		pointer->next = malloc(sizeof(struct node));
		pointer = pointer->next;
	}

	node = 0;
	pointer = list_2;

	while(node < 8)
	{
		node++;
		pointer->next = malloc(sizeof(struct node));
		pointer = pointer->next;
	}

	node = 1;
	pointer = list_1;

	while(pointer != NULL)
	{
		pointer->data = node++;
		pointer = pointer->next;
	}

	node = 1;
	pointer = list_2;

	while(pointer != NULL)
	{
		pointer->data = node++;
		pointer = pointer->next;
	}

	sum = add_two_numbers(list_1, list_2);

	pointer = list_1;

	while(pointer != NULL)
	{
		printf("%d", pointer->data);
		pointer = pointer->next;
	}

	printf("\n");

	pointer = list_2;

	while(pointer != NULL)
	{
		printf("%d", pointer->data);
		pointer = pointer->next;
	}

	printf("\n");

	pointer = sum;

	while(pointer != NULL)
	{
		printf("%d", pointer->data);
		pointer = pointer->next;
	}
}