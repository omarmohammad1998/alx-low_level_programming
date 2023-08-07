#include "main.h"
#include <stdlib.h>
/**
 * str_concat - get ends of input and add
 * @s1: input one to contact
 * @s2: input two to contact
 * Return: contact of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	char *contact;
	int i, ci;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	i = ci = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[ci] != '\0')
		ci++;
}
