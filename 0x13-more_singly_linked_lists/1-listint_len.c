#include "lists.h"
/**
  * listint_len - prints the number of elements
  * @h: pointer to linked list
  * Return: the number of elements
  */

size_t listint_len(const listint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
