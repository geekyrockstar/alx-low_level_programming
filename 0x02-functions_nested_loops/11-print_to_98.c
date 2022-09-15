#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - print all natural numbers from input to 98
 * @num: starting point
 *
 * Return: void returns nothing.
 */

void print_to_98(int num)
{
	if (num <= 98)
		for (num = num; num <= 97; num++)
			printf("%d, ", num);
	else
		for (num = num; num > 98; num--)
			printf("%d, ", num);
	printf("98\n");
}
