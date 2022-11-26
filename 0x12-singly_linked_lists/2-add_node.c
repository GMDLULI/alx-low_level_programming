#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
  * *add_node - adds a node at the beginning
  * @**head: poiter to the first node
  * @str: string
  * @head: the pointer to the first node
  * Return: new node
  */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int length = 0;

	new = malloc(sizeof(list_t));

	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	new->str = strdup(str);

	while (str[length] != '\0')
	{
		length++;
	}
	new->len = length;
	if (*head != NULL)
		new->next = *head;
	if (*head == NULL)
		new->next = NULL;
	*head = new;
	return (*head);
}
