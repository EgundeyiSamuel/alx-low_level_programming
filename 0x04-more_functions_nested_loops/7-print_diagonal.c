#include "main.h"

/**
 * print_diagonal - gives a diagonal line on the terminal
 * @n: no of the character \ should be printed
 */

void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	} else
	{
		int y, z;

		for (y = 0; y < n; y++)
		{
			for (z = 0; z < n; z++)
			{
				if (z == y)
					_putchar('\\');
				else if (z < y)
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
}
