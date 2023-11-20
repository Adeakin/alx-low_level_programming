#include "lists.h"

/**
 * add_nodeint_end - adds node at the end of a linked list
 * @head: pointer to first element in the list
 * @n: data to insert in the new element
 *
 * Return: pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode;
	listint_t *teMp = *head;

	newNode = malloc(sizeof(listint_t));
	if (!newNode)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;

	if (*head == NULL)
	{
		*head = newNode;
		return (newNode);
	}

	while (teMp->next)
		teMp = teMp->next;

	teMp->next = newNode;

	return (newNode);
}
