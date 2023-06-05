#include <stdio.h>
/**
 * main - prints all combinations of single digit no.
(*
 * Return: 0 on success
 */
int main(void)
{
	int k = '0';

	while (k <= '9')
	{
		putchar(k);
		if (k != '9')
		{
			putchar(',');
			putchar(' ');
		}
		++k;
	}
	putchar('\n');
	return (0);

}
