#include "main.h"
#include <stdio.h>

/**
 * main - prints the name
 * @argc: num of ar
 * @argv: array of args
 *
 * Return: Always 0
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
