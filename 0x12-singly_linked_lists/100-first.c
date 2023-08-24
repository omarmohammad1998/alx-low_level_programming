#include "lists.h"

void _consructor(void) __attribute__ ((constructor));

/**
 * _constructor - executes before main()
 *
 * Return: void
 */
void _constructor(void)
{
	printf("you're beat! and yet, you must allow, \n"
		"i bore my house upon my back!\n");
}
