#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return: Always 0 (Success)
 */
int main (void)
{
	int x;
	char y;
	long int z;
	long long int a;
	float b;

	printf("Size of a char: %lu byte(s)\n", sizeof(y));
	printf("Size of an int: %lu byte(s)\n", sizeof(x));
	printf("Size of a long int: %lu byte(s)\n", sizeof(z));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(a));
	printf("Size of a float: %lu byte(s)\n", sizeof(b));
	return (0);
}
