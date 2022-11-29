#include "lists.h"

/**
  * free_listint - frees linked list
  * @head: pointer to linked list
  * Return: no return
  */

void free_listint(listint_t *head)
{
	void *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
