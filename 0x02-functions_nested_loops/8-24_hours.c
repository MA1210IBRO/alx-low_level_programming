#include "main.h"
/**
 * jack_bauer - function that prints every minute of the day jack bauer, starti
 * n from 00:00 to 23:00, min loop count mins, while hour loop counts hours
 * and reset mins
 * Return: 0
 */
void jack_bauer(void)
{
	int hours = 0;
	int minutes = 0;
	int hours_remanider;
	int minutes_remanider;

	while (hours <= 23)
	{
	while (minutes <= 59)
	{
	minutes_remanider = minutes % 10;
	hours_remanider = hours % 10;
	_putchar(hours / 10 + '0');
	_putchar(hours_remanider + '0');
	_putchar(':');
	_putchar(minutes / 10 + '0');
	_putchar(mins_remanider + '0');
	minutes++;
	_putchar('\n');
	}
	hours++;
	minutes = 0;
}
}
