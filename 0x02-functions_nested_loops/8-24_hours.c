#include "main.h"

/**
 * jack_bauer - prints all minute of the day
 * @void: nothing
 *
 **/

void jack_bauer(void)
{
	int hour = 0;
	int minute = 0;
	int hrs_remainder;
	int min_remainder;

	while (hour <= 23)
	{
        while (minute <= 59)
        {
        min_remainder = minute % 10;
        hrs_remainder = hour % 10;
        _putchar(hour / 10 + '0');
        _putchar(hrs_remainder + '0');
        _putchar(':');
        _putchar(minute / 10 + '0');
        _putchar(min_remainder + '0');
        minute++;
        _putchar('\n');
        }
        hour++;
        minute = 0;
    }
}
