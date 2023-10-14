#include "main.h"

/**
* print_numbers - this prints numbers from 0 to 9
* Return: Returns (0) Always
*/
void print_numbers(void)
{
	int x;

	for (x = '0'; x <= '9'; x++)
	{
		_putchar(x);
	}
	_putchar('\n');
	return (0);
}
