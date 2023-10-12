#include "main.h"

/**
 * print_last_digit - prints the last digit no.
 * @n: the int is to get the last digit from
 * Return: no of the last digit
 */
int print_last_digit(int n)
{
	int s;

	if (n < 0)
	n = -n;

	s = n % 10;

	if (s < 0)
		s = -s;

	_putchar(s + '0');

	return (s);
}
