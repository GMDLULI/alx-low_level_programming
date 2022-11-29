#include "lists.h"

/**
  * add_nodeint - adds an node at the beginnig of a linked list
  * @head: double pointer to linked list
  * @n: node data
  *Return: no return
  */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new, **ptr;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	while (new != NULL)
	{
		printf("%d\n", new->n);
		new = new->next;
	}
	if (head == NULL)
	{
		new->next = *head;
	}
	if (head != NULL)
	{
		new->next = NULL;
	}
	*head = new;
	return (*head);
}
