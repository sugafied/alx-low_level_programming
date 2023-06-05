#include <stdio.h>
/**
 * main - printing the alphabet in lowercase
(*
 * Return: 0 on success
 */
int main(void)
{
	char r = 'a';

	while (r <= 'z')
	{
		putchar(r);
		r++;
	}
	putchar('\n');
	return (0);
}
