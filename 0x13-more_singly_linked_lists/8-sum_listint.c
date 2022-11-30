#include "lists.h"

/**
  * sum_listint - returns the sum of linked list
  * @head: pointer to the first linked list
  * Return: sum
  */

int sum_listint(listint_t *head)
{
	int sum;
	listint_t *ptr = head;

	while (ptr != NULL)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}
	return (sum);
}

