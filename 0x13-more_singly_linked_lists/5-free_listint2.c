#include "lists.h"

/**
 * free_listint2 - this frees linked list
 * @head: pointer to the list to be freed
 */
void free_listint2(listint_t **head)
{
	listint_t *teMp;

	if (head == NULL)
		return;

	while (*head)
	{
		teMp = (*head)->next;
		free(*head);
		*head = teMp;
	}

	*head = NULL;
}
