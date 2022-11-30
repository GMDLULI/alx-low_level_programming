#include "lists.h"

/**
  * free_listint - frees linked list
  * @head: pointer to linked list
  * Return: no return
  */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
