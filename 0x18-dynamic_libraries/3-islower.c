#include "main.h"

/**
 * _islower - This will check if character @c is lowercase
 *@c: Character to be input
 *Return: 1 if is lowercase else return 0
 */

int _islower(int c)
{
char lca;
int a = 0;

for (lca = 'a'; lca <= 'z'; lca++)
{
if (lca == c)
a = 1;
}

return (a);
}
