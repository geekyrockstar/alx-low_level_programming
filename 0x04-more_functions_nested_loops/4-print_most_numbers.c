#include "main.h"

/**
 * print_most_numbers - print 0-9 without 2 and 4
 *
 * Return: nothing
 **/

void print_most_numbers(void)
{
	char num;

	for (num = '0'; num <= '9'; num++)
	{
		if ((num == '2') || (num == '4'))
		{
			num++;
		}
		_putchar(num);
	}
	_putchar('\n');
}
