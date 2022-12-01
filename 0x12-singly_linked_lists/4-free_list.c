#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
  * free_list - frees a list_t list
  * @head: a pointer to the list_t list
  */

void free_list(list_t *head)
{
	list_t *current;

	while ((current = head) != NULL)
	{
		head = head->next;
		free(current->str);
		free(current);
	}
}

