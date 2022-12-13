#include "main.h"

/**
 * print_alphabet_x10 - this is a funtion that prints 10 times the alphabet
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	char chr;

	for (chr = 'a'; chr <= 'z'; chr++)
	{
		_putchar(chr);
	}
	_putchar('\n');
}
