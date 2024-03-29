#include "lists.h"

/**
 * print_dlistint - function that prints all elements of a dlistint_t list
 * @h: linked list
 * Return: number of nodes in linked list
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
