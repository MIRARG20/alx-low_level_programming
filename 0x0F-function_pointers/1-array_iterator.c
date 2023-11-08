#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter
 * on each element of an array
 * @array:an array
 * @size: the array size
 * @action: function pointer
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
int i;
if (!(array || action))
return;
for (i = 0; i < size; i++)
(*action)(array[i]);
}


