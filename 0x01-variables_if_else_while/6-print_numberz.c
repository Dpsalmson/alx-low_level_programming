#include <stdio.h>

/**
 * main - Print the numberz since 0 t0 9
 *
 * Return: Always (Success)
 */
int main(void)
{
int n;
for (n = '0'; n <= '9'; n++)
{
putchar(n);
}
putchar('\n');
return (0);
}
