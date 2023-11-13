#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @c: the character to be checked
 * Return: 1 alphabetic character or 0 for anytheng else
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 97) || (c >= 97 && c <= 122))
	{
	return (1);
	}
	return (0);
}
