#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list
 * @head: pointer to the first element in the linked list
 *
 * Return: the data inside the elements that was deleted,
 * or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num = 0;

	if (!head || !*head) /* check if the list is empty */
		return (0);
	num = (*head)->n; /* store the value of the first element */
	temp = *head; /* store the address of the first element */
	*head = (*head)->next; /* make the second element the new head */
	free(temp); /* delete the previous head */
	return (num);
}

