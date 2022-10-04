#include "main.h"

/**
 * free_grid - frees a 2d array
 * @grid:memoryblock to be freed
 * @height: height of the array
 * Return: return void
 */

void free_grid(it **grid, int height)
{
int i;

for (i = 0; i < height; i++)
free(grid[i]);
free(grid);
}
