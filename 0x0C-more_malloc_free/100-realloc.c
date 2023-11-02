#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _realloc -  resize the memory block that was previously allocated
 * @ptr: a pointer to the previously allocated memory
 * @old_size: size of the previously allocated memory
 * @new_size: new size to resize the block to
 * Return: pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
void *t;
int i;
if (new_size == old_size)
{
return (ptr);
}
if (new_size == 0 && ptr != NULL)
{
free(ptr);
return (NULL);
}
if (ptr == NULL)
{
t = malloc(new_size);
if (t == NULL)
{
return (NULL);
}
return (t);
}
if (new_size > old_size)
{
t = malloc(new_size);
if (t == NULL)
return (NULL);
for (i = 0; i < old_size && i < new_size; i++)
*((char *)t + i) = *((char *)ptr + i);
free(ptr);
}
return (t);
}
