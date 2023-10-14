#include "main.h"

/**
 * more_numbers - print more numbers
 * Return: Returns (0) Always
 */

void more_numbers(void)
{
	int y, z;

	for (y = 1; y <= 10; y++)
	{
		for (z = 0; z <= 14; z++)
		{
			if (z >= 10)
				_putchar('1');
			_putchar (z % 10 + '0');
		}
		_putchar('\n');
	}
}
