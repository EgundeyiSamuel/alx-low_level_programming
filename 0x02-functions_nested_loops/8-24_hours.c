#include "main.h"

/**
 * jack_bauer - prints minutes of the day of Jack Bauer from 00:00-23:59
 * starting from 00:00 to 23:59
 */
void jack_bauer(void)
{
	int y, z;

	y = 0;

	while (y < 24)
	{
		z = 0;
		while (z < 60)
		{
			_putchar((y / 10) + '0');
			_putchar((y % 10) + '0');
			_putchar(':');
			_putchar((z / 10) + '0');
			_putchar((z % 10) + '0');
			_putchar('\n');
			z++;
		}
		y++;
	}
}
