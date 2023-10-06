#include <stdio.h>
/**
* main -  Program that prints the alphabet in lowercase, then new line
* Return: Returns (0) Sucess
*/
int main(void)
{
	char alpha_b = 'a';

	while (alpha_b <= 'z')
	{
	if (alpha_b != 'e' && alpha_b != 'q')
	{
	putchar(alpha_b);
	}
	alpha_b++;
	}
	putchar('\n');
	return (0);
}
