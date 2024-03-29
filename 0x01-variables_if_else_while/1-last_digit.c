#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Each time it is executed assign a random number
 *
 * Return: 0 (Success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n < 0)
	{
		printf("%d is %s\n", n, "negative");
	}
	else if (n > 0)
	{
		 printf("%d is %s\n", n, "positive");
	}
	else
	{
		 printf("%d is %s\n", n, "zero");
	}
	return (0);
