#include "main.h"
/**
 * _strpbrk - searches a string for any of the set bytes.
 * @s: The string to be searched
 * @accept: The set of bytes to be searched for
 *
 * Return: If a set is matched - apointer to match the byte.
 * if not set is matched - NULL
 */
char *_strpbrk(char *s, char *accept)
{
	int index;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
				return (s);
		}
		s++;
	}
	return ('\0');
}
