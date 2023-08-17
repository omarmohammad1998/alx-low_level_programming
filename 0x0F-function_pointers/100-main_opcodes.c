#include <stdio.h>
#include <stdlib.h>

/**
 * main - print its own op
 * @argc: num of arg
 * @argv: arr of arg
 *
 * Return: Always 0(success)
 */
int main(int argc, char *argv[])
{
	int bytes, i;
	char *arr;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	arr = (char *)main;

	for (i = 0; i < bytes; i++)
	{
		if (i == byts - 1)
		{
			printf("%0.2hhx\n", arr[i]);
			break;
		}
		printf("%0.2hhx", arr[i]);
	}
	return (0);
}
