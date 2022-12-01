#include "lists.h"

/**
  * get_nodeint_at_index - return nth node of a linked list
  * @index: index of the linked list
  * @head: pointer to the  first node
  * Return: linked list with added node
  */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *ptr = NULL;
	unsigned int count;

	count = 0;
	ptr = head;

	while (ptr != NULL)
	{
		if (count == index)
			return (ptr);

		count++;
		ptr = ptr->next;
	}

	return (NULL);
}

