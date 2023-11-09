#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - prints strings
 * , followed by a new line
 * the sum of all its parameters
 * @separator : a string to be
 * printed between the strings
 * @n : number of arguments
 * @... : the strings to print
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i;
char *s;
va_list(ptr);
va_start(ptr, n);
for (i = 0; i < n; i++)
{
s = va_arg(ptr, char *);
if (s != NULL)
printf("%s", s);
else
printf("(nil)");
if (separator != NULL && i < n - 1)
printf("%s", separator);
}
va_end(ptr);
printf("\n");
}
