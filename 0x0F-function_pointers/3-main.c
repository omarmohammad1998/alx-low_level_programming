#include "function_pointers.h"
#include <stdlib.>
#include <stdio.h>
#include "3-calc.h"
/**
 * main - prints the result
 * @argc: the num of args
 * @argv: an array of pointrs
 *
 * Return: Always 0.
 */
int main(int __attribute__((__unused__)) arg, char *argv[])
{
	int num1, num2;
	char *op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[i]);
	op = argv[2];
	num2 = atoi(argv[3]);

	if (get_op_fun(op) == NULL || op[i] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*op == '/' && num2 == 0) || (*op == '%' && num2 == 0))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", get_op_fun(op)(num1, num2));

	return(0);
}
