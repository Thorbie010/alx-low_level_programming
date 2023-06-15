#include "lists.h"
#include <stddef.h>
#include <stdio.h>
/**
 * print_dlistint - funtion taht prints number of nodes in a linked list
 * @h: head of node
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *current = h;
	size_t nodeCount = 0;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
		nodeCount++;
	}
	return (nodeCount);
}
