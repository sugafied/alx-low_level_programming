#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	long int l;
	long long int n;
	char r;
	float a;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(r));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(i));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(l));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(n));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(a));
	return (0);
}
