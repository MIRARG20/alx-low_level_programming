#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - a function that prints a name
 * @name: name to be print
 * @f: a pointer to the function
 */
void print_name(char *name, void (*f)(char *))
{
if (name && f)
(*f)(name);
}
