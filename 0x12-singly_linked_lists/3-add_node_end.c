#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a linked list
 * @head: double pointer to the list_t list
 * @str: string to put in the new node
 * Return: address of the new element, or NULL if it failed */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *tail = *head;
	unsigned int len = strlen(str);
	
	new = malloc(sizeof(list_t));

	if (!new)
		return (NULL);
	new->str = malloc((len + 1) * sizeof(char));
	if (!new->str)
	{
		free(new);
		return (NULL);
	}
	strcpy(new->str, str);
	new->len = len;
	new->next = NULL;
	if (!tail) /* empty list */
	{
		head = new;
	}
	else /* non-empty list */
	{
		while (tail->next)
			tail = tail->next;
		tail->next = new;
	}
	return (new);
}
