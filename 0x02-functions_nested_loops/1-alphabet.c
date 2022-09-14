/**
 * print_alphabet -  prints the lowercase alphabet
 *
 * Return: void
 */

void print_alphabet(void)
{
	int ch;
	for  (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
		putchar ('\n');
		getch();
	}	
return (0);
}

