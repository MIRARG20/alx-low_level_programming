#include <stdio.h>
/**
 * main - Entry point
 * Description: prints all possible combinations of two two-digit numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
int counter = 0;
int a = 0;

while (a < 100)
{
int b = a;

while (b < 100)
{
if (a < 10)
{
putchar('0');
}

printf("%d ", a);
if (b < 10)
{
putchar('0');
}

printf("%d", b);

if (counter < 7)
{
printf(", ");
}
else
{

break;
}

counter++;
b++;
}
a++;
}

return (0);
}
