#include "lists.h"

/**
  * get_nodeint_at_index - return nth node of a linked list
  * @index: index of the linked list
  * @head: pointer to the  first node
  * Return: linked list with added node
  */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count;

	index = 0;

	for (count = 0; count < index; count++)
	{
		if (head == NULL)
			return (NULL);

		head = head->next;
	}

	return (head);
}

