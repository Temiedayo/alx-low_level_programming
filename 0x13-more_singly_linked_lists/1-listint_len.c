#include "lists.h"
/**
 * listint_len - Returns num of elements in a linked lists
 * @h: Linked list of the type listint_t to move
 *
 * Return: Num of the nodes.
 */
size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}
	return (num);
}
