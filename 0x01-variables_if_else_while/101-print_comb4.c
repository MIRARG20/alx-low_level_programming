#include <stdio.h>
/**
 * main - Entry point
 * Description: prints all possible different combinations of three digits.
 * Return: Always 0 (Success)
 */
int main(void)
{
int i = '0';
int j = '1';
int k = '2';

while (i < '8')
{
while (j < k && k < '9')
{
putchar(i);
putchar(j);
putchar(k);
putchar(' ');

k++;

if (k > '9')
{
j++;
k = j + 1;
}
}

i++;
}
putchar('\n');
return (0);
}
