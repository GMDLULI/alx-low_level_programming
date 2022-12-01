#include "lists.h"

/**
  * delete_nodeint_at_index - delete node at index
  * @head: pointer to the first node
  * @index: index of the list where the node is
  * deleted.
  * Return: 1 if it succeeded, -1 if it failed.
  */


int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	int i;
	listint_t *next;
	listint_t *prev;

	prev = *head;

	if (index != 0)
	{
		for (i = 0; i < index - 1 && prev != NULL; i++)
		{
			prev = prev->next;
		}
	}
	if (prev == NULL || (prev->next == NULL && index != 0))
	{
		return (-1);
	}

	next = prev->next;

	if (index != 0)
	{
		prev->next = next->next;
		free(next);
	}
	else
	{
		free(prev);
		*head = next;
	}
	return (1);
}
