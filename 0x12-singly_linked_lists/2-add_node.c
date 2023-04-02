#include "lists.h"

struct node
{
	int data;
	struct node *next;
};
  

list_t *add_node(list_t **head, const char *str);
{
	//create a new node
	struct node *newNode = malloc(sizeof(struct node));
	newNode->data = val;

	newNode->next = *head;

	*head = newNode;
}
