#include "mainn.h"
/**
 * rev_string - this function will print characters in reverse.
 * @s: the input character
 */
void rev_string(char *s)
{
	int start = 0, end = 0;
	char t;

	while (s[end] != 0)
		end++;
	end--;

	while (start < end)
	{
		t = s[start];
		s[start] = s[end];
		s[end] = t;
		start++;
		end--;
	}
}
