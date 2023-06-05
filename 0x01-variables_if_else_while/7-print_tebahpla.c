#include <stdio.h>
/**
 * main - prints alphabet in reverse
(*
 * Return: 0 on success
 */
int main(void)
{
	char t = 'z';

	while (t >= 'a')
	{
		putchar(t);
		t--;
	}
	putchar('\n');
	return (0);
}
