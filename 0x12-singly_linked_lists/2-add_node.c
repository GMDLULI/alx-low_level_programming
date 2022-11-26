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
	size_t nchar;

	new = malloc(sizeof(list_t));

	if (new == NULL)
	{
		return (NULL);
	}
	new->str = strdup(str);

	for (nchar = 0; str[nchar]; nchar++)
	{
		new->len = nchar;
		new->next = *head;
		*head = new;
	}
	return (*head);
}
