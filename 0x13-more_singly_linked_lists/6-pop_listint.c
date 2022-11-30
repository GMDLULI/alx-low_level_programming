#include "lists.h"

/**
  * pop_listint - deletes the head of the linked lists
  * @head: pointer to linked list
  * Return: linked list of deleted
  */

int pop_listint(listint_t **head)
{
	if (*head == NULL)
	{
		return (0);
	}
	else
	{
		listint_t **temp = head;
		*head = *head->next;
		free(temp);
		temp = NULL;
	}
	return (*head);
}
