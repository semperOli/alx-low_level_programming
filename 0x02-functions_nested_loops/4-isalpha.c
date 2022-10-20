#include "main.h"
/**
 * _isalpha - Check if code for a character that us upper or lowercase
 * @c: The character to be input
 * Return: 1 otherwise 0 
 */
int _isalpha(int c)
{
char lca, lcu;
int a = 0;

for (lca = 'a'; lca <= 'z'; lca++)
{
for (lcu = 'A'; lcu <= 'Z'; lcu++)
{
if (c == lca || c == lcu)
a = 1;
}
}
return (a);
}
