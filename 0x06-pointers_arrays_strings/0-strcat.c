#include "main.h"
/**
 * _strncat - function appends the src string to the dest string
 *
 * @dest: this is the string that is added to
 * @src: this is the string that is to be appended
 * @n: the number of bytes from @src
 *
 * Return: a pointer to the resulting string @dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int len1 = 0; 
	int len2 = 0;
	int i;

	while (src[len1] != '\0')
		len1++;

	while (dest[len2] != '\0')
		len2++;

	for (i = 0; i < n; i++)
	{
		dest[len2] = src[i];
		len2++;
	}
	return (dest);
}

