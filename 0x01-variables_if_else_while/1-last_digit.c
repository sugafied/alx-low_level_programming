#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - find out if last digt of random number is greater
 * than or less than 5, or is zero
 *
(*
 * Return: 0 on success
 */
int main(void)
{
	int n;
	char last_digit[] = "The last digit of";

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("%s %d is %d and is ", last_digit, n, n % 10);
	/* your code goes there */
	if (n % 10 > 5)
	{
		printf("greter than 5\n");
	}
	else if (n % 10 == 0)
	{
		printf("0\n");
	}
	else
	{
		printf("less than 6 and not 0\n");
	}
	return (0);
}
