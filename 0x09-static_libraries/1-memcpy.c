#include "main.h"
/**
 * _memcpy - a fun that copies the mem
 * @dest: mem where is stored
 * @src: mem where is cop
 * @n: num of bytes
 *
 * Return: copied mem with n bytes
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);

}
