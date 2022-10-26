#include "main.h"

/**
 * _puts - This function that prints a string
 * @str: string that is to be printed
 * Return: string
 */
void _puts(char *str)
{
	int a;

	for (a = 0; str[a] != '\0'; a++)
	{
		_putchar(str[a]);
	}
	_putchar('\n');
}
