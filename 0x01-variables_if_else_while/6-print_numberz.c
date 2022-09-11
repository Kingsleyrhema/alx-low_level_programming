#include <stdio.h>

/**
 * main - print for 0 - 9
 *
 * Return: Always 0 (successful)
 */

int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		putchar("%d", n);
	}
	putchar('\n');
	return (0);
}
