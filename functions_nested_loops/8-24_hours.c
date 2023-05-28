#include "main.h"
#include <stdio.h>

/**
 * jack_bauer - Prints every minute of the day of Jack Bauer.
 * Description: should print every hour and minute of the day.
 * Return: Always 0
 */
void jack_bauer(void)
{
	int hour1;
	int hour2;
	int minute1;
	int minute2;

	for (hour1 = 0; hour1 <= 2; hour1++)
	{
	for (hour2 = 0; hour2 <= 9; hour2++)
	{
		if ((hour1 <= 1 && hour2 <= 9) || (hour1 <= 2 && hour2 <= 3))
		{
		_putchar('0' + hour1);
		_putchar('0' + hour2);
		_putchar(':');

		for (minute1 = 0; minute1 <= 5; minute1++)
		{
			for (minute2 = 0; minute2 <= 9; minute2++)
			{
			_putchar('0' + hour1);
			_putchar('0' + hour2);
			_putchar(':');
			_putchar('0' + minute1);
			_putchar('0' + minute2);
			_putchar('\n');
			}
		}
		}
	}
	}
}
