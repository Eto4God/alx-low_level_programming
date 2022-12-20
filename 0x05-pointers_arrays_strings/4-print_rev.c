#include "main.h"

/**
 * print_rev - prints a string, in reverses, followed by a new line.
 * @s: input strings.
 * Return: no return.
 */
void print_rev(char *str)
{
	int counter = 0;

	while (str[counter] != '\0')
	{
		counter++;
	}
	for (counter -= 1; counter >= 0; counter--)
	{
		_putchar(str[counter]);
	}
	_putchar('\n');
}
