#include <stdio.h>
/**
 * main - print alphapets expect q and a
 *
 * Return: always(0)
 *
 */
int main(void)
{
	char numbers = '0';
	char letters = 'a';

	while (numbers <= '9')
	{
		putchar(numbers);
		numbers++;
	}
	while (letters <= 'f')
	{
		putchar(letters);
		letters++;
	}
	putcher('\n');
	return (0);
}
