#include <stdio.h>
#include "lists.h"

/**
 * print_list - Printing all elements of 'list_t' list
 * @h: Is a pointer to the head of the linked list
 *
 * Return: The number printed nodes
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL) /* Loop through each node in the list */
	{
		/* If the string in the current node is NULL, print a special message */
		if (h->str == NULL)
			printf("[0] (nil)\n");
		/* Otherwise, print the length and contents of the string in this node */
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next; /* Move to the next node in the list */
		count++;
	}
	return (count);
}
