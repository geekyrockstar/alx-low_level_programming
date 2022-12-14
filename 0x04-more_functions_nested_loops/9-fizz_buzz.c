#include "main.h"
#include <stdio.h>
/**
 * main - Fizz-Buzz
 *
 * Description: print numbers from 1 -100 replacing multiples of 3 with Fizz,
 * multiples of 5 with Buzz, and multiples of both with FizzBuzz
 *
 * Return: zero
 **/

int main(void)
{
	int num;

	for (num = 1; num < 100; num++)
	{
		if (num % 3 == 0 && num % 5 == 0)
			printf("FizzBuzz ");
		else if (num % 3 == 0)
			printf("Fizz ");
		else if (num % 5 == 0)
			printf("Buzz ");
		else
			printf("%d ", num);
	}
	printf("Buzz\n");
	return (0);
}
