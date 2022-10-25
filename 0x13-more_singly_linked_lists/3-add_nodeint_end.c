#include "lists.h"

/**
 * add_nodeint_end - add a new node at the end
 * @head: head of a list.
 * @n: n element.
 *
 * Return: address of the new element. NUll if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp = (listint_t *)malloc(sizeof(listint_t));
	listint_t *temp1;

	if (temp == NULL)
		return (NULL);

	temp->n = n;
	temp->next = NULL;

	temp1 = *head;
	if (temp1 == NULL)
		*head = temp;
	else
	{
		while (temp1->next != NULL)
			temp1 = temp1->next;
		temp1->next = temp;
	}

	return (*head);
}

