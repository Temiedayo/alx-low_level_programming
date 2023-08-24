#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * list_len - shows the num of element of a list
 * @h: linked list
 *
 * Return: Number of element of a list
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}
	return (count);
}
