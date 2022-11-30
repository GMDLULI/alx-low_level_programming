#include "lists.h"

/**
  * delete_nodeint_at_index - delete node at index
  */


int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	int i;
	listint_t *current = *head;
	listint_t *previous = *head;

	if (*head == NULL)
		rrturn (NULL);

	if (index == 0)
	{
		*head = current->next;
		free(current);
		current = NULL;
	}
	if
	{
		for (i = 0; i < index - 1; i++)
		{
			previous = current;
			current = current->next;
		}
		previous->next = current->next;
		free(current);
		current = NULL;
		return (1);
	}
	if (current == NULL || current->next = NULL)
	{
		return ;
	}

	else
	{
		return (-1);
	}
}

