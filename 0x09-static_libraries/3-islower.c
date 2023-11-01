#include "main.h"
/**
* _islower - checks for lowercase character.
* @c: CheckS Parameter
* Return: Returns (0) or (1) Always
*/

int _islower(int c)
{
	if (c <= 'z' && c >= 'a')
		return (1);
	else
		return (0);
}
