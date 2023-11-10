#include "lists.h"
/**
 * dlistint_len - return number of double linked list element
 * @h: list head
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	int count;

	count = 0;

	if (h == NULL)
		return (count);
	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
