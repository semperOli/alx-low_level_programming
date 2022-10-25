#include <stdio.h>
#include "holberton.h"

/**
 * _strlen - function to return string length
 * @s: The character that is to be input 
 * Return: length of the input string
 */
int _strlen(char *s)
{
	int a;

	while (*s != '\0')
	{
		a = a + 1;
		s = s + 1;
	}
	return (a);
}
