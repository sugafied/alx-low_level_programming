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
	int n = '0';

	while (r <= '7')
	{
		while (m <= '8')
		{
			while (n <= '9')
			{
				if (r < m && m < n)
				{
					putchar(r);
					putchar(m);
					putchar(n);
					if (!(r == '7' && m == '8' && n == '9'))
					{
						putchar(',');
						putchar(' ');
					}

				}
				n++;
			}
			n = '0';
			m++;
		}
		m = '0';
		r++;
	}
	putchar('\n');
	return (0);
}

