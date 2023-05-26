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
		for (minute = 0; minute < 60; minute++)
		{
		if (hour < 10)
		{
		_putchar(48);
		_putchar(hour + '0');
		}
		else
		{
		_putchar(hour + '0');
		}
		_putchar(58);
		
		if (minute < 10)
		{
		_putchar(48);
		_putchar(minute + '0');
		}
		else
		{
		_putchar(minute);
		}
		_putchar('\n');
		}
	}
}
