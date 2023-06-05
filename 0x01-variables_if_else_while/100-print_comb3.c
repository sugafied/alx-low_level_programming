#include <stdio.h>
/**
 * main - print all numbers from 00 to 99.
(*
 * Return: 0 on success
 */
int main(void)
{
	int r = '0';
	int m = '0';

	while (r <= '9')
	{
		while (m <= '9')
		{
			if (!(r > m || r == m))
			{
				putchar(r);
				putchar(m);
				if (r == '8' && m == '9')
				{
					putchar('\n');
				}
				else
				{
					putchar(',');
					putchar(' ');
				}
			}
			m++;
		}
		m = '0';
		r++;
	}
	return (0);
}

