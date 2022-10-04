#include "main.h"

/**
 * alloc_grid - returns a pointer to a
 * 2 dimensional arrayof inegers
 * @width: width of array
 * @height: height of array
 */

int **alloc_grid(int width, int height)
{
int **array;
int i = 0, j;

if (width == 0 || height == o)
return (NULL);
array = (int **) malloc(sizeof(int *) * height);
if (array != NULL)
{
for (; i < height; i++)

{
array[i] = (int *) malloc(sizeof(int) * width);
if (array[i] != NULL)
{
for (j = 0; j < width; j++)
array[i][j] = 0;
}
else
{
while (i >= 0)
{
free(array[i]);
i--;
}
free(array);
return (NULL);
}
}
return (array);
}
else
{
return (NULL);
}
}
