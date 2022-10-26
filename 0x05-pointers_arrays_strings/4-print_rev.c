#include "main.h"

/**
 * print_rev - function will print string in reverse
 * @s: string to be input 
 * Return: string in reverse
 */
void print_rev(char *s)
{
	int fcounter = 0;
	int a, b;

	for (a = 0; s[a] != '\0'; a++)
	{
		fcounter++;
	}

	for (b = (fcounter - 1); b >= 0; b--)
	{
		_putchar(s[b]);
	}
	_putchar('\n');
}
