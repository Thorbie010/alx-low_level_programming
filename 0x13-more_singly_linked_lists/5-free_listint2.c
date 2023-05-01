#include "lists.h"

/**
 * free_listint - A function that frees a linked list
 * @head: A pointer to listint_t structure
 * Return: Nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return (0);

	while (head)
	{
		temp = head;
		*head = (*head)->next;
		free(temp);
	}
	*head == NULL;
}
