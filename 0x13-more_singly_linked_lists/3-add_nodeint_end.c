#include "lists.h"
/**
  * add_nodeint_end - adds a node at the end
  * @head: pointer to linked list
  * @n: data stored in node
  *
  * Return: no return
  */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *ptr;

	ptr = *head;
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);


	new->n = n;
	new->next = NULL;

	if (*head == NULL)
		*head = new;

	else
	{
		while (ptr->next != NULL)
		{
			ptr = ptr->next;
		}
		ptr->next = new;
	}

	return (*head);
}
