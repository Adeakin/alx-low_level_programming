#include "lists.h"

/**
 * free_listint - frees linked list
 * @head: list to be freed
 */
void free_listint(listint_t *head)
{
	listint_t *teMp;

	while (head)
	{
		teMp = head->next;
		free(head);
		head = teMp;
	}
}
