#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _memset - set a block of memory to a specific value
 * @t: a pointer to the memory block
 * @value: the value to be set
 * @num: the number of bytes to be set.
 * Return: pointer
 */
void *_memset(void *t, char value, unsigned int num)
{
unsigned char *ptr = t;
unsigned int i;
for (i = 0; i < num; i++)
{
ptr[i] = value;
}
return (t);
}

/**
 * _calloc - allocates memory using malloc
 * @nmemb: numbers of elements
 * @size: bytes
 * Return: pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
void *ptr;
if (nmemb == 0 || size == 0)
{
return (NULL);
}
ptr = malloc(nmemb * size);
if (ptr == NULL)
{
return (NULL);
}
_memset(ptr, 0, nmemb * size);
return (ptr);
}
