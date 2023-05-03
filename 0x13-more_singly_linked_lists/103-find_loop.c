#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: linked list to search for
 *
 * Return: address of the node where the loop starts, or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	/* Initialize pointers */
	listint_t *slow = head, *fast = head;

	/* Check if list is empty */
	if (!head)
		return (NULL);

	/* Traverse the list using two pointers, slow and fast */
	while (slow && fast && fast->next)
	{
		slow = slow->next; /* Move slow pointer one step at a time */
		fast = fast->next->next; /* Move fast pointer two steps at a time */

		/* If they meet, it means there's a loop */
		if (slow == fast)
		{
			/* Reset slow to the beginning of the list */
			slow = head;

			/* Move both pointers one step at a time until they meet */
			while (slow != fast)
			{
				slow = slow->next;
				fast = fast->next;
			}

			/* Return the address of the node where the loop starts */
			return (fast);
		}
	}

	/* If there's no loop, return NULL */
	return (NULL);
}
