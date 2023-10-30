#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array
 * @width: width of the array
 * @height: height of the array.
 * Return: a pointer to an array
 */
int **alloc_grid(int width, int height)
{
int **ptr;
int i, j;
if (width == NULL || height == NULL)
{
return (NULL);
}
ptr = (int **)malloc(height * sizeof(int *));
if (ptr == NULL)
{
return (NULL);
}
for (i = 0; i < height; i++)
{
ptr[i] = (int *)malloc(width * sizeof(int));
if (ptr[i] == NULL)
{
for (j = 0; j < i; j++)
{
free(ptr[j]);
}
free(ptr);
return (NULL);
}
}
return (ptr);
}
