#include "main.h"

/**
 * clear_bit - sets the val of a given bit 0
 * @n: pointer to the num
 * @index: index of the bit
 *
 * Return: 1 for success, -1 for fail
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
