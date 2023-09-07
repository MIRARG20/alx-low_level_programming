#include<stdio.h>

/**
 * main - Entry point
 * Description: a c program prints a new line, to the standard error using write function
 *	ssize_t write(int fd, const void *buf, size_t count);
 * Return: 1 (error).
*/

int main(void)
{
	char quo[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(1, quo, 59);

	return (1);
}
