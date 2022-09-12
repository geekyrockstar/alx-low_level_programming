#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Positive or Negative - print sign of random number
 *
 * Return: 0 for success
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

    printf("Last digit of %d is %d ", n, (n % 10));
    if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}

	return (0);
}