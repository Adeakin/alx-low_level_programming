#include "lists.h"
/**
 * print_listint_safe - function which prints a linked list with a loop safely.
 * @head: pointer to the 1st node of the linked list
 * Return: new_node
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *temp_n = NULL;
	const listint_t *t_p = NULL;
	size_t count = 0;
	size_t newNode_n;

	temp_n = head;
	while (temp_n)
	{
		printf("[%p] %d\n", (void *)temp_n, temp_n->n);
		count++;
		temp_n = temp_n->next;
		t_p = head;
		newNode_n = 0;
		while (newNode_n < count)
		{
			if (temp_n == t_p)
			{
				printf("-> [%p] %d\n", (void *)temp_n, temp_n->n);
				return (count);
			}
			t_p = t_p->next;
			newNode_n++;
		}
		if (!head)
			exit(98);
	}
	return (count);
}
