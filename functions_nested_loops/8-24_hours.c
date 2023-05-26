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

	for (hour1 = 0; hour1 < 10; hour1++)
	{
		for (hour2 = 0; hour2 < 10; hour2++)
		{
		_putchar('0');
		_putchar('0');
		}
		_putchar(':');

		for (minute1 = 0; minute1 < 10; minute1++)
		{
			for (minute2 = 0; minute2 < 10; minute2++)
			{
			_putchar('0');
			_putchar('0');
			}
		}
		_putchar('\n');
	}
}
