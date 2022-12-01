#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
  * *add_node - adds a node at the beginning
  * @**head: poiter to the first node
  * @str: string
  * @head: the pointer to the first node
  * Return: new node
  */

list_t *add_node(list_t **head, const char *str)
{
	int count;

	for (count = 0; str[count] != '\0'; count++)
		;

	struct list_t *new = malloc(sizeof(struct list_t));

	if (new == NULL)
		return (NULL);

	new->str = strdup(str);

	if(new->str == NULL)
		return (NULL);

	new->len = count;
	new->next = *head;
	*head = new;

	return (*head);
}
