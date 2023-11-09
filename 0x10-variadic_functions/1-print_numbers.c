#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - prints numbers, followed by a new line
 * @separator : a string to be printed between numbers
 * @n : number of arguments
 * @... : the integers to print
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i;
int x;
va_list(ptr);
va_start(ptr, n);

for (i = 0; i < n; i++)
{
x = va_arg(ptr, int);
printf("%d", x);
if (separator != NULL && i < n - 1)
printf("%s", separator);
}
va_end(ptr);
printf("\n");
}
