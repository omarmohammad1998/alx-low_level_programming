#include "main.h"

/**
 * _abs - computes the apsolute value of thr integer
 * @c: the number to be computed.
 * Return: Absolute value of numbers or zero
 */

int _abs(int c)
{

	if (c < 0)
	{
		int abs_val;

		abs_val = c * -1;
		return (abs_val);
	}
	return (c);
}
