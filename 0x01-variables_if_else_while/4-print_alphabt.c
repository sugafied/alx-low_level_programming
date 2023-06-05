#include <stdio.h>
/**
 * main - Prints alphabet except the letters q&e.
(*
 * Return: 0 on success
 */
int main(void)
{
	char r = 'a';

	while (r <= 'z')
	{
		if (r != 'q' && r != 'e')
		{
			putchar(r);
		}
		r++;
	}
	putchar('\n');
	return (0);
}
