#include "main.h"

/**
 * *_memset - fills mem by a char 1-byte
 * @s: pointer to fill the mem with
 * @b: const
 * @n: max bytes avilable
 * Return: pointer s.
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int cp;

	for (cp = 0; cp < n; cp++)
	{
		s[cp] = b;
	}

	return (s);
}
