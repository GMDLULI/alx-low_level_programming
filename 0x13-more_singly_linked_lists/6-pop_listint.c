#include "lists.h"

/**
  * pop_listint - deletes the head of the linked lists
  * @head: pointer to linked list
  * Return: linked list of deleted
  */

int pop_listint(listint_t **head)
{
	int del;
	listint_t *temp;

	if (*head == NULL)
		return (0);

	temp = *head;
	del = (*head)->n;
	*head = (*head)->next;

	free(temp);
	temp = NULL;

	return (del);
}
