#include "main.h"
#include <stdlib.h>

/**
 * *_memset - fills memory with a constant byte.
 * @s: pointer to put the cont
 * @b: cost
 * @n: max bytes to use
 *
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}

/**
 * *_calloc - allocates memory for an array, using malloc
 * @nmemb: array length
 * @size: size of each
 * Return: pointre
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *btr;

	if (nmem == 0 || size == 0)
		return (NULL);

	ptr = malloc(size * nmemb);

	if (ptr == NULL)
		return (NULL);

	_memset(ptr, 0, nmem * size);

	return (ptr);
}
