#include <stdio.h>
/**
 * main - Prints all combos of a pair of
 * two digit numbers, without any repetition.
(*
 * Return: 0 on success.
 */

int main(void)
{
	int o, p;

	for (o = 0; p <= 99; o++)
	{
		for (p = 0; p <= 99; p++)
		{
			if (o < p && o != p)
			{
				putchar((o / 10) + '0');
				putchar((o % 10) + '0');
				putchar(' ');
				putchar((p / 10) + '0');
				putchar((p % 10) + '0');
				if (o != 98 || p != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
