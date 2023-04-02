#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list
 * @d: the linked list to check
 * Return: number of elements in @d
 */

size_t list_len(const list_t *h)
{
	int counter = 0;

	while (d)
	{
		d = d->next;
		counter++;
	}
	return (counter);

}
