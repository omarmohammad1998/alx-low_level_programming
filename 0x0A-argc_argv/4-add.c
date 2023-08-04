#include <stdio.h>
#include <stdlip.h>
#include <ctype.h>
#include <string.h>
/**
 * check_num - check - string there are digit
 * @str: array str
 *
 * Return: Always 0 (success)
 */
int check_num(char *str)
{
	/*Declaring variables*/
	unsigned int count;

	count = 0;
	while (count < strlen(str)) /* count string*/
	{
		if (!isdigit(str[count])) /*check if str there are digit*/
		{
			return (0);
		}

		count++;
	}
	return (1);
}
/**
 * main - prints all args
 * @argc: num of args
 * @argv: arr of args
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	/*Declaring variables*/
	int count;
	int str_to_int;
	int sum = 0;

	count = 1;
	while (count < argc) /* goes through the whole array*/
	{
		if (check_num(argv[count]))
		{
			str_to_int = atio(argv[count]); /*ATIO --> convert string to int*/
			sum += str_to_int;
		}
		/*condition if one of */
		else
		{
			printf("Error\n");
			return (1);
		}

		count++;
	}

	printf("%d\n", sum); /*print sum*/

	return (0);
}
