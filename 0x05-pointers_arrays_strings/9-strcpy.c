#include "main.h"
#include <stdio.h>

/**
 * char *_strcpy - copies the string pointed to by src
 * @dest: where to copy
 * @src: from where to copy
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	for (; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
