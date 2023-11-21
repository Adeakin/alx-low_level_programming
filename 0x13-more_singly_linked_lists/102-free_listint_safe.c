#include "lists.h"

/**
 * free_listint_safe - frees linked list
 * @h: pointer to first node in linked list
 *
 * Return: the size of the list that was free’d
 */
size_t free_listint_safe(listint_t **h)
{
	size_t len = 0;
	int stuff;
	listint_t *teMp;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		stuff = *h - (*h)->next;
		if (stuff > 0)
		{
			teMp = (*h)->next;
			free(*h);
			*h = teMp;
			len++;
		}
		else
		{
			free(*h);
			*h = NULL;
			len++;
			break;
		}
	}

	*h = NULL;

	return (len);
}
