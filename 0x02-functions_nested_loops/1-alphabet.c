#include "main.h"

/**
 * print_alphabet - This function prints the english alphabtets in lower cases
 * Return: Always 0
 */
void print_alphabet(void)
{
	char chr;

	for (chr = 'a'; chr <= 'z'; chr++)
	{
		_putchar(chr);
	}
	_putchar('\n');
}
