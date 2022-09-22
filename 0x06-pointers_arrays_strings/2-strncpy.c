#include "main.h"

/**
 * _strcat - concatenates 2 strings
 *
 * @dest: destination array
 * @src: source array
 *
 * Return: destination array
 */

char *_strcat(char *dest, char *src, int n)
{
int index = 0, src_len = 0;

while (src[index++])
src_len++

for (index = 0; src[index] && index < n; index++)
dest[index] = src[index];

for (index = src_len; index < n; index++)
dest[index] = '\0';

return (dest);
}
