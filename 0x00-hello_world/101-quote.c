#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
/**
 * main - Prints out the last part of a quote in the standard error.
 *
 *
 * Return: 1 if success.
 */
int main(void)
{
	write(STDOUT_FILENO, "and that piece of art is useful
			\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
