#include "lists.h"
/**
 * add_dnodeint - adds new node at the begining of dlistint_t list
 * @n: value of element
 * @head: double pointer to the head of the list
 * Return: new element address, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *h;
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	h = *head;
	if (h != NULL)
	new->next = h;
	if (h != NULL)
		h->prev = new;
	*head = new;
	return (new);
}
