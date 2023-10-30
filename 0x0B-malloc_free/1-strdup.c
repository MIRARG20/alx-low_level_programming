#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - returns a pointer to a newly allocated memory
 * @str: a string
 * Return: a pointer to allocated memory
 */
char *_strdup(char *str)
{
char *n;
int lenght;
if (str == NULL)
{
return (NULL);
}
lenght = strlen(str);
n = (char *) malloc((lenght + 1) * sizeof(char));
if (n == NULL)
{
return (NULL);
}
strcpy(n, str);
return (n);
}
