#include <stdio.h>
/**
 * main - printing the numbers of base 16
(*
 * Return: 0 on success
 */
int main(void)
{
	int v = '0';

	while (v <= '9')
	{
		putchar(v);
		v++;
	}
	v = 'a';
	while (v <= 'f')
	{
		putchar(v);
		v++;
	}
	putchar('\n');
	return (0);

}
