#include "main.h"

/**
 * print_square - execute square, then new line;
 * @size: space of square
 */
void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	} else
	{
		int y, z;

		for (y = 0; y < size; y++)
		{
			for (z = 0; z < size; z++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
