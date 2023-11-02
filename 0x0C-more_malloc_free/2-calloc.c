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
int _memset(int *t, int value, int num)
{
int i;
for (i = 0; i < num; i++)
t[i] = value;
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
int *ptr;
if (nmemb == 0 || size == 0)
return (NULL);
ptr = malloc(size * nmemb);
if (ptr == NULL)
return (NULL);
_memset(ptr, 0, nmemb);
return (ptr);

}
