#include "main.h"

/**
 * print_alphabet : using _putchar function print all letters from 'a' to 'z'
 *
*/

void print_alphabet(void)
{
	char ch = 'a';
	
	for (; ch <= 'z';++ch)
	{
		_putchar(ch);
	}
	_putchar('\n');
}

