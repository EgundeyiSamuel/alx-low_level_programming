#include "main.h"

/**
 * print_most_numbers - this prints from 0 to 9 without 2&3
 * Return: Returns (0) Always
*/

void print_most_numbers(void)
{
	int x = 0;

	while (x <= 9)
	{
		if (x != 2 && x != 4)
		{
			_putchar(x + '0');
		}
		x++;
	}
	_putchar('\n');
}
