#include "main.h"
#include <stdio.h>

/**
 * isprintableASCII - determines if s is printable ASCII
 * @n integer
 * Return 1 is tue, 0 is dalse
 *
 */

int isprintableASCII(int n)
{
	return (n >= 32 && n <= 126);
}

/**
 * printHEXES - print hex vaues for
 * @b: string to print
 * @start: starting position
 * @end: ending position
 */

void printHEXES(char *b, int start, int end)
{
	int i = 0;

	while (i < 10)
	{
		if (i < end)
			printf("%02x", *(b + start + i));
		else
			printf("  ");
		if (i % 2)
			printf(" ");
		i++;

	}
}

/**
 * printASCII - print ascii values for string b,
 * formatted to replace nonprintable chars with '.'
 * @b: string to print
 * @start: starting position
 * @end: ending position
 */

void printASCII(char *b, int start, int end)
{
	int ch, i = 0;

	while (i < end)
	{
		ch = *(b + i + start);
		if (!isprintableASCII(ch))
			ch = 46;
		printf("%c", ch);
		i++;
	}
}

/**
 * print_buffer - prints s buffer
 * @b: stirng
 * @size: size of buffer
 */

void print_buffer(char *b, int size)
{
	int start, end;

	if (size > 0)
	{
		for (start = 0; start < size; start += 10)
		{
			end = (size - start < 10) ? size - start : 10;
			printf("%08x: ", start);
			printHEXES(b, start, end);
			printASCII(b, start, end);
			printf("\n");
		}
	} else
		printf("\n");
}
