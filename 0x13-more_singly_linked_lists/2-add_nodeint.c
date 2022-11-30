#include "lists.h"

/**
  * add_nodeint - adds an node at the beginnig of a linked list
  * @head: double pointer to linked list
  * @n: node data
  *Return: no return
  */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->next = *head;

	*head = new;

	return (new);
}
