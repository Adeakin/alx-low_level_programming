#include "lists.h"

/**
 * pop_listint - deletes head node of linked list
 * @head: pointer to first element in the linked list
 *
 * Return: the data in the elements that was deleted,
 * or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *teMp;
	int numb;

	if (!head || !*head)
		return (0);

	numb = (*head)->n;
	teMp = (*head)->next;
	free(*head);
	*head = teMp;

	return (numb);
}
