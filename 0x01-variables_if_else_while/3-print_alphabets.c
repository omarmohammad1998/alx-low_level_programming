#include <stdioh>
/**
 * main - print alpha in caps an low case
 *
 * Return: (0)
 *
 */
int main(void)
{
	char LOWER = 'a';
	char UPPER = 'A';

	while (LOWER <= 'z')
	{
		putchar(LOWER);
		LOWER++
	}
	while (LOWER <= 'Z')
	{
		putchar(UPPER);
		UPPER++;
	}
	putchar('\n');
	return (0);
}
