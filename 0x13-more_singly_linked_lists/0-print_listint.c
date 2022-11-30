#include "lists.h"

/**
  * print_listint - prints all the elements in the linked list
  * @h: pointer to print.
  * Return: all the elements.
  */

size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		nodes++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (nodes);
}


