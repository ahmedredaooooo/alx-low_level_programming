#include <unistd.h>

/**
 * _putchar - writes chars c to stdout
 * @c: char  to print
 *
 * Return: on succcess 1
 * on error, -1 returned.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
