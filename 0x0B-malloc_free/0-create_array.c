#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - creates an array of chars
 * , and initializes it with a specific char.
 * @size: the size of an array
 * @c: a specific char
 * Return: a pointer to the array, or NULL if it fails.
 */
char *create_array(unsigned int size, char c)
{
unsigned int i;
if (size == 0)
{
return (NULL);
}
char *n = (char *)malloc(size * sizeof(char));
if (n == NULL)
return (NULL);
else
{
for (i = 0 ; i < size ; i++)
n[i] = c;
}
return (n);
}

