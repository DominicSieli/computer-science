#include <stdio.h>
#include <stdlib.h>

struct node
{
	int data;
	struct node* next;
};

struct node* merge_two_lists_iterative(struct node* list_1, struct node* list_2)
{
	struct node* node = NULL;
	struct node* head = NULL;
	struct node* tail = NULL;

	if(list_1 != NULL && list_2 == NULL) return list_1;
	if(list_1 == NULL && list_2 != NULL) return list_2;

	while(list_1 != NULL && list_2 != NULL)
	{
		node = (list_1->data < list_2->data) ? list_1 : list_2;
		if(tail == NULL) head = node; else tail->next = node; tail = node;
		if(list_1->data < list_2->data) list_1 = list_1->next; else list_2 = list_2->next;
	}

	if(list_1 != NULL) {tail->next = list_1; tail = list_1;}
	if(list_2 != NULL) {tail->next = list_2; tail = list_2;}

	return head;
}

struct node* merge_two_lists_recursive(struct node* list_1, struct node* list_2)
{
	if(list_1 == NULL) return list_2;
	if(list_2 == NULL) return list_1;
	if(list_1->data < list_2->data) {list_1->next = merge_two_lists_recursive(list_1->next, list_2); return list_1;}
	if(list_1->data >= list_2->data) {list_2->next = merge_two_lists_recursive(list_1, list_2->next); return list_2;}
	return NULL;
}

struct node* list_1 = NULL;
struct node* list_2 = NULL;

int main()
{
	for(int i = 10; i > 0; i--)
	{
		struct node* node = malloc(sizeof(struct node));
		node->data = i;
		node->next = list_1;
		list_1 = node;
	}

	for(int i = 10; i > 0; i--)
	{
		struct node* node = malloc(sizeof(struct node));
		node->data = i;
		node->next = list_2;
		list_2 = node;
	}

	struct node* list = merge_two_lists_iterative(list_1, list_2);

	while(list != NULL)
	{
		printf("%d\n", list->data);
		list = list->next;
	}
}