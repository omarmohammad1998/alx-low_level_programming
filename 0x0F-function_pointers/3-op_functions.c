#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - Returns the sum
 * @a: the first num.
 * @b: the second num.
 *
 * Return: the sum of a and b.
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - Returns the sum
 * @a: the first num.
 * @b: the second num.
 *
 * Return: the def of a and b.
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - Returns the sum
 * @a: the first num.
 * @b: the second num.
 *
 * Return: the prod of a and b.
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - Returns the sum
 * @a: the first num.
 * @b: the second num.
 *
 * Return: the qout of a and b.
 */
int op_div(int a, int b)
{
	return (a  / b);
}
/**
 * op_mod - Returns the sum
 * @a: the first num.
 * @b: the second num.
 *
 * Return: the remind of a and b.
 */
int op_mod(int a, int b)
{
	return (a % b);
}
