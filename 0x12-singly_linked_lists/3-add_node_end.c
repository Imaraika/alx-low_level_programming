#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a linked list
 * @head: double pointer to the list_t list
 * @str: string to put in the new node
 * Return: address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
/* create a pointer that points to the beginning of the list */
list_t *temp = *head;

/* create a new node for our list */
list_t *new_node = malloc(sizeof(list_t));
if (!new_node)
return (NULL);

/* copy the string passed as an argument to the new node */
new_node->str = strdup(str);
if (!new_node->str)
{
free(new_node);
return (NULL);
}

/* count the length of the string and store it in the new node */
new_node->len = 0;
while (new_node->str[new_node->len])
new_node->len++;

/* set the new node's next pointer to NULL, it will be the new last node */
new_node->next = NULL;

/* if our list is empty, insert the new node as the head */
if (*head == NULL)
{
*head = new_node;
return (new_node);
}

/* traverse to the end of the list using our temp pointer */
while (temp->next != NULL)
temp = temp->next;

/* set the last node's next pointer to the new node */
temp->next = new_node;

/* return the new node */
return (new_node);
}

