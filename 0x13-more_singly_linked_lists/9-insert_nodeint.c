#include "lists.h"

/**
  * insert_nodeint_at_index - add new node at index
  * @head: pointer to first node
  * @idx: index
  * @n: data
  * Return: no return
  */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	int i;

	listint_t *temp = *head;
	listint_t *NewNode = malloc(sizeof(listint_t));

	NewNode->n = n;

	if (index == 0)
	{
		NewNode->next = head;
		head = NewNode;
	}
	else if
	{
		for (i = 0; i < idx - 1; i++)
		{
			temp = temp->next;
		}
		NewNode->next = temp->next;
		temp->next = NewNode;
	}
	else
	{
		return (NULL);
	}
}
