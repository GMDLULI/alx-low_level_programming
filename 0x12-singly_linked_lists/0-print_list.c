#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
  * print_list - prints all the elements of list_t list
  * @h: singly linked list
  * Return: number of elements in the list.
  */

size_t print_list(const list_t *h)
{
	size_t count;

	count = 0;

	while (h != NULL)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		count++;
	}
	return (count);
}

