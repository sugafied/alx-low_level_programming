#include <stdio.h>
/**
 * main - Prints alphabet in lowercase, then prints in uppercase.
(*
 * Return: 0 on success
 */
int main(void)
{
	char r = 'a';
	char x = 'A';

	while (r <= 'z')
	{
		putchar(r);
		r++;
	}
	while (x <= 'Z')
	{
		putchar(x);
		x++;
	}
	putchar('\n');
	return (0);

}
