#include <stdio.h>

/**
 * main - A C program thats print a line to standard error
 * Return: 1 (not success)
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
