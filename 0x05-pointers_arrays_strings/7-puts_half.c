#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: character to be input
 */
void puts_half(char *str)
{
	int a, b, c;

	for (b = 0; str[b] != '\0'; b++)
	{
	}

	if ((b  % 2) == 0)
		c = (b / 2);
	else
		c = (b + 1) / 2;

	for (a = c; a < b; a++)
	{
		_putchar(str[a]);
	}
	_putchar('\n');
}
