#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: linked list to search for
 *
 * Return: address of node where loop starts, or NULL if there is no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *soft = head;
	listint_t *hard = head;

	if (!head)
		return (NULL);

	while (soft && hard && hard->next)
	{
		hard = hard->next->next;
		soft = soft->next;
		if (hard == soft)
		{
			soft = head;
			while (soft != hard)
			{
				soft = soft->next;
				hard = hard->next;
			}
			return (hard);
		}
	}

	return (NULL);
}
