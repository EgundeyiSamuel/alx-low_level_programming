#include "main.h"
/**
 * swap_int - this swaps integers
 * @a: first value
 * @b: second value
 * Return: Returns (0) Always
 */

void swap_int(int *a, int *b)
{
	int x;

	x = *b;
	*b = *a;
	*a = x;
}

