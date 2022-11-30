#include "lists.h"

/**
  * get_nodeint_at_index - return nth node of a linked list
  * @index: index of the linked list
  * @head: pointer to the  first node
  * Return: linked list with added node
  */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current = head;
	int count = 0;

	index = 0;

	while (current != NULL)
	{
		if (count == index)
		{
			return (current->n);
			count++;
			current = current->next;
		}
		else
		{
			return (NULL);
		}
	}
}
