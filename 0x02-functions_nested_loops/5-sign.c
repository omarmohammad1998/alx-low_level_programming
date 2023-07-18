#include "main.h"

/**
 * print_sign - checks for alphabetic character
 * @n: the character to be checked
 * Return: 1 postife num, or -1 for negative num or 0 for anytheng else
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
