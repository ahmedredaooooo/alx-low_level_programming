#include "main.h"

/**
 * print alphabet using _putchar function
 *
*/

void print_alphabet(void)
{
	char ch = 'a';
	
	for (; ch <= 'z'; ++ch)
	{
		_putchar(ch);
	}
	_putchar('\n');
}

