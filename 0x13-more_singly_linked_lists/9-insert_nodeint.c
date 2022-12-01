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
	unsigned int i;

	listint_t *temp;
	listint_t *NewNode;

	temp = *head;

	if (idx != 0)
	{
		for (i = 0; (i < idx - 1 && temp != NULL); i++)
		{
			temp = temp->next;
		}
	}
	if (temp == NULL && idx != 0)
		return (NULL);

	NewNode = malloc(sizeof(listint_t));
	if (NewNode == NULL)
		return (NULL);

	NewNode->n = n;

	if (idx == 0)
	{
		NewNode->next = *head;
		*head = NewNode;
	}
	else
	{
		NewNode->next = temp->next;
		temp->next = NewNode;
	}

	return (NewNode);
}
