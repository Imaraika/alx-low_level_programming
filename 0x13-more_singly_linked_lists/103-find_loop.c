#include "lists.h"

/**

find_listint_loop - finds the loop in a linked list

@head: linked list to search for

Return: address of the node where the loop starts, or NULL
*/
listint_t *find_listint_loop(listint_t head)
{
listint_t slow = head;
listint_t fast = head;

/* check if the linked list is empty */
if (!head)
return (NULL);

/* loop through the linked list */
while (slow && fast && fast->next)
{
/* move pointers */
fast = fast->next->next;
slow = slow->next;
 /* if pointers meet, it means there is a loop */
 if (fast == slow)
 {
 	/* set slow pointer to head and move pointers at the same pace */
 	slow = head;
 	while (slow != fast)
 	{
 		slow = slow->next;
 		fast = fast->next;
 	}
 	/* return the address where the loop starts */
 	return (fast);
 }
}
/* if there is no loop in the linked list */
return (NULL);
}
