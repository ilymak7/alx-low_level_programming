#include "lists.h"

/**
 * get_nodeint_at_index - returns n-th node of listint_t linked list
 * @head: pointer to head of linked list
 * @index: nth node
 * Return: n-th node, or NULL.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{

	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	while ((i < index) && head != NULL)
	{
		head = head->next;
		i++;
	}

	if (i == index)
		return (head);

	return (NULL);
}
