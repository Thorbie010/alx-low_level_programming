#include "lists.h"
/**
 * dlistint_len - funtion taht prints number of nodes in a linked list
 * @h: head of node
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t nodecount = 0;
	const dlistint_t *current = h;

	while (current != NULL)
	{
		nodecount = nodecount + 1;
		current = current->next;
	}
	return (nodecount);
}
