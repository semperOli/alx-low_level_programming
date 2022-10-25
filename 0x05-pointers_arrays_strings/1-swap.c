#include "main.h"

/**
 * swap_int - a function for swapping integer values
 * @a: First input
 * @b: Second input
 * Return: ints
 */
void swap_int(int *a, int *b)
{
int n;

n = *a;
*a = *b;
*b = n;
}
