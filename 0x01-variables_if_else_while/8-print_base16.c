#include <stdio.h>
/**
 * main - Entry point
 * Description: a program that prints all single digit numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
int digit = 48;
while (digit <= 102)
{
putchar (digit);
if (digit == 57)
digit += 39;
digit++;
}
printf("\n");

return (0);


}
