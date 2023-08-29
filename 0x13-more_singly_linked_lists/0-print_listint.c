#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all elements in a linked list
 * @h: linked list of type listint_t to print
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t count_nodes = 0;

	while (h)
	{
		printf("%d\n", h->n);
		count_nodes++;
		h = h->next;
	}
	return (count_nodes);
}
