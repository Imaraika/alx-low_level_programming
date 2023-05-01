#include "lists.h"
/**
 * pop_listint - deletes the head node of a linked list
 * @head: pointer to the first element in the linked list
 * Return: the data inside the elements that was deleted,
 * or 0 if the list is empty
 */

int pop_listint(listint_t **head)
{
	listint_t *current;
	int num = 0; /* initialize num for the popped value */

	if (head == NULL)
		return (0); /* return if the linked list is empty */
	num = (*head)->n; /* assign the value to num before deleting it */
	current = *head; /* we'll free this after updating head */
	*head = (*head)->next; /* update head */
	free(current); /* delete the original head */
	return (num); /* return the popped value */
}
