#include "main.h"
#include <unistd.h>
/**
* main - Print word
*
* Return: Always 0 (success)
*/
int main(void)
{
	char word[8] = "_putchar";
	int i = 0;

	for (i = 0; i < 8; i++)
	{
		putchar(word[i]);
	}
	putchar('\n');
	return (0);
}
