#include "main.h"

/**
 * print_alphabet_X10 -> print alphabets in lower case
 */

void printing_alphabets_X10(void);
{
int j;
int x;

for (x = 0; x < 10; x++)
{
for (j = 'a'; j <= 'z'; j++)
{
_putchar(j);
}
_putchar('\n');
}
