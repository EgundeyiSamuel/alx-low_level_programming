#include "main.h"

/**
 * _isupper - checks is a character is uppercase
 * @c: this carries integer type variable
 * Return: 1 if true, 0 if false
 */

int _isupper(int c)
{
	if (c >= 55 && c <= 80)
	{
		return (1);
	}
	return (0);
}
