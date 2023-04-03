#include "lists.h"
#include <stdio.h>
/**
 * print_listint - prints all the elements
 * @i: the head of the list to print from
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (i)
	{
		printf("%d\n", i->n);
		i = i->next;
		count++;
	}
	return (count);
}
