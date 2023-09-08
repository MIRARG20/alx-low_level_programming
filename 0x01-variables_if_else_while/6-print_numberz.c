#include <stdio.h>
/**
 * main - Entry point
 * Description: a program that prints all single digit numbers using putchar
 * Return: Always 0 (Success)
 */
int main(void)
{
int digit = 0;
while (digit <= 9)
{
putchar (digit + '0');
digit++;
}
putchar('\n');

return (0);


}
