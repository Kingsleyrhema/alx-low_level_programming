#include <stdio.h>
/**
 * main - main block
 * Return: always 0
 */
int main(void)
{
	int i;

	for (i = 123; i > 97; i--)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
