#include "main.h"

/**
 * _isupper - checks is a character is uppercase
 * @c: this carries integer type variable
 * Return: 1 if true, 0 if false
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
		return (0);
}
