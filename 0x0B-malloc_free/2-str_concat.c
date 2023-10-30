#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * str_concat - concatenates two strings
 * @s1: a string
 * @s2: a string
 * Return: a pointer to allocated memory
 */
char *str_concat(char *s1, char *s2)
{
int length1, length2;
char *ptr;
if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
length1 = strlen(s1);
length2 = strlen(s2);
ptr = (char *)malloc((length1 + length2 + 1) * sizeof(char));
if (ptr == NULL)
{
return (NULL);
}
strcpy(ptr, s1);
strcat(ptr, s2);
return (ptr);
}
