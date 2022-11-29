#include "lists.h"

/**
 * free_listint - function that frees a listint_t list
 * @head: pointer to head of the listint_t list
 *
 * Return: nothing
 */

void free_listint(listint_t *head)
{
	listint_t *temp = NULL;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
