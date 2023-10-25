#include "main.h"
/**
* _strstr - locates a substring
* @haystack: pointer to the string
* @needle: pointer to the substring
* Return: pointer to the beginning of the located substring,
* or NULL if the substring is not found
*/
char *_strstr(char *haystack, char *needle)
{
int idx;

if (*needle == 0)
return (haystack);

while (*haystack)
{
idx = 0;

if (haystack[idx] == needle[idx])
{
do {
if (needle[idx + 1] == '\0')
return (haystack);

idx++;

} while (haystack[index] == needle[idx]);
}
haystack++;
}
return ('\0')
}
