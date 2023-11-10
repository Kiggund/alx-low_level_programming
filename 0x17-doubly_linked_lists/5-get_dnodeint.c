#include "lists.h"
/**
 * get_dnodeint_at_index - return nth node of dlistint_t linked list
 * @head: list head
 * @index: index of the node, starting from 0
 * Return: nth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int j;

	if (head == NULL)
		return (NULL);
	while (head->prev != NULL)
		head = head->prev;

	j = 0;

	while (head != NULL)
	{
		if (j == index)
			break;
		head = head->next;
		j++;
	}

	return (head);
}
