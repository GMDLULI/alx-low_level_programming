#include "lists.h"

/**
  * sum_listint - returns the sum of linked list
  * @head: pointer to the first linked list
  * Return: if the list is empty - 0.
  *        otherwise - the sum of all data
  */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}

