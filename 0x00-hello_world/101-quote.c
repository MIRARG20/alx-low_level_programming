#include <stdio.h>
/**
 * main - Entry point
 * description: Write a C program using write function
 * 	ssize_t write(int fd, const void *buf, size_t count);
 * Return: 1 (not Success)
*/

int main(void)
{
	char quo[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(1, quo, 59);

	return (1);
}
