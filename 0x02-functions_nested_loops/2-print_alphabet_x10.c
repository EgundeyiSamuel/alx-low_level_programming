#include "main.h"
/**
* print_alphabet_x10 - prints 10 times the alphabet, with newline.
* Return: Returns (0) Always
*/
void print_alphabet_x10(void)
{
	int s;
	char e;

	for (s = 1 ; s < 10 ; s++)
	{
		for (e = 'a' ; e <= 'z' ; e++)
		
				_putchar(e);
		_putchar('\n');
		
	}
}
