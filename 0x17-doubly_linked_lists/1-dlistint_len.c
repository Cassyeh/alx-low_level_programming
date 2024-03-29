#include "lists.h"

/**
 * dlistint_len - function that returns number of elements in linked list
 * @h: linked list
 * Return: number of elements in linked list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
