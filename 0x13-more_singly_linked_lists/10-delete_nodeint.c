#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node in a linked list at a specific index
 * @head: pointer to the first element in the list
 * @index: index of the node to delete
 *
 * Return: 1 if successful, or -1 if Failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *teMp = *head;
	listint_t *spec = NULL;
	unsigned int x = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(teMp);
		return (1);
	}

	while (x < index - 1)
	{
		if (!teMp || !(teMp->next))
			return (-1);
		teMp = teMp->next;
		x++;
	}


	spec = teMp->next;
	teMp->next = spec->next;
	free(spec);

	return (1);
}
