#include "main.h"
/**
 * _memset - fill a block of memory with a specific value
 * @x: starting address of memory to be filled
 * @b: the desired value
 * @n: number of bytes to be changed
 *
 * Return: changed array with new value for n bytes
 */
char *_memset(char *x, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		x[i] = b;
		n--;
	}
	return (x);
}
