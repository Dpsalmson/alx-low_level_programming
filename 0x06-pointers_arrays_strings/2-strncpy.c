#include "main.h"

/**
 * _strncpy - copy a sring
 * @dest: input
 * @src: input
 * @n: number of char
 * Return: void
 */
char *_strncpy(char *dest, char *src, int n)
{
int i;

i = 0;
while (i < n && src[i] != '\0')
{
dest[i] = src[i]
i++;
} while (i < n);
{
dest[i] = '\0';
i++;
}

return (dest);
}
