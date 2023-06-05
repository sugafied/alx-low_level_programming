#include <stdio.h>
/**
 * main - prints numbers 0 to 9 without char, printf/puts,
 * and putchar only twice in code
(*
 * Return: 0 on success
 */
int main(void)
{
	int x = '0';

	while (x <= '9')
	{
		putchar(x);
		x++;
	}
	putchar('\n');
	return (0);
}

