#include "main.h"
#include <stdio.h>

/**
 * jack_bauer - Prints every minute of the day of Jack Bauer.
 * Description: should print every hour and minute of the day.
 * Return: Always 0
 */
void jack_bauer(void)
{
	int hour;
	int minute;

	for (hour = 0; hour < 24; hour++)
	{
		_putchar(hour);
		_putchar(58);
		
		for (minute = 0; minute < 60; minute++)
		{
			_putchar(minute);
			_putchar('\n');
		}
	}
}
