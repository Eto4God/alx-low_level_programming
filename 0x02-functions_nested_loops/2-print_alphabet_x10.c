#include "main.h"

/**
 * print_alphabet_x10 - this is a funtion that prints 10 times the alphabet
 * Return: x10 a-z
 */
void print_alphabet_x10(void)
{
	char chr, co;

	co = 0;

	while (co < 10)
	{
		for (chr = 'a'; chr <= 'z'; chr++)
		{
			_putchar(chr);
		}
		co++;
		_putchar('\n');
	}
}
