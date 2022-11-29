#include "lists.h"

/**
  * print_listint - prints all the elements in the linked list
  * @h: pointer to print.
  * Return: all the elements.
  */

size_t print_listint(const listint_t *h)
{
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
}


