#include "main.h"

/**
* *_memcpy - fun that copy val from src to dest for n consecutive chars
* @dest: copy to
* @src: copy from
* @n: max bytes av
* Return: pointer s.
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int cp;

for (cp = 0; cp < n; cp++)
{
dest[cp] = src[cp];
}
return (dest);
}
