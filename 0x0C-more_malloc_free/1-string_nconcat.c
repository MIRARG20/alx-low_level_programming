#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings.
 * @s1: first string
 * @s2: second string
 * @n: number of bytes from s2
 * Return: char pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *ptr;
unsigned int length1, length2;
unsigned int i, j;
if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
for (length1 = 0; s1[length1] != '\0'; length1++)
;
for (length2 = 0; s2[length2] != '\0'; length2++)
;
if (n >= length2)
{
ptr = malloc(length1 + length2 + 1);
}
else
{
ptr = malloc(length1 + n + 1);
}
if (ptr == NULL)
return (NULL);
for (i = 0; s1[i] != '\0'; i++)
{
ptr[i] = s1[i];
}
for (j = 0; j < n && s2[j] != '\0'; j++)
{
ptr[i] = s2[j];
i++;
}
ptr[i] = '\0';
return (ptr);
}

