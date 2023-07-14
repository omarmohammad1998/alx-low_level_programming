#include <stdio.h>
/**
 * main - print alphapets expect q and a
 *
 * Return: always(0)
 *
 */
int main(void)
{
	int numbers = '0';

	while (numbers <= '9')
	{
		putchar(numbers);
		if (numbers <= '8')
		{
			putchar(',');
			putchar(' ');
		}
		numbers++;
	}
	putchar('\n');
	return (0);
}
