#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * sum_them_all - variadic function returns
 * the sum of all its parameters
 * @n : number of arguments
 * @... : the integers to sum
 *
 * Return: sum of all its parameters
 */
int sum_them_all(const unsigned int n, ...)
{
int sum = 0;
unsigned int i;
va_list ptr;
if (n == 0)
return (0);
va_start(ptr, n);
for (i = 0; i < n; i++)
sum += va_arg(n, int);
va_end(ptr);
return (sum);
}
