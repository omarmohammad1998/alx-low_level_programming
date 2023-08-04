#include "main.h"
/*
 * _memset - fill a block of memory with a spetial vulum
 * @s: starting
 * @b: the desired val
 * @n: number of b
 *
 * Return: changed array with
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
