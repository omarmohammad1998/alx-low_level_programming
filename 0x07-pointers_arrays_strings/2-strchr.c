#include "main.h"
/**
 * _strchr - intry point
 * @s: input
 * @c: input
 * Return: alwais 0 (success)
 */
_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
