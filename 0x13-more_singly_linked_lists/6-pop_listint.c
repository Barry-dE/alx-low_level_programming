#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list
 * @head: pointer to head node
 * Return: head node's data(n)
 */

int pop_listint(listint_t **head)
{
	listint_t *temp = *head;
	int n;

	if (head == NULL)
		return (0);

	if (temp == NULL)
		return (0);

	*head = (*head)->next;
	n = temp->n;
	free(temp);

	return (n);
}

