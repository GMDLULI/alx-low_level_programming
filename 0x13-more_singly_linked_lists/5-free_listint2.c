#include "lists.h"

/**
  * free_listint2 - frees a linked list while assigninh the head to NULL
  * @head: pointer to pointer og a linked list
  * Return: no return
  */

void free_listint2(listint_t **head)
{
	listint_t *ptr;

	if (head == NULL)
		return;

	while (*head)
	{
		ptr = (*head)->next;
		free(*head);
		*head = ptr;
	}

	head = NULL;
}
