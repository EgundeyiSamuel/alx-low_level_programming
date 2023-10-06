#include <stdio.h>
/**
* main - Prints all the numbers of base 16 in lowercase, then a new line
* Return: Returns (0) Sucess
*/
int main(void)
{
	char baseSixtheen = '0';

	while (baseSixtheen <= '9')
	{
	putchar(baseSixtheen);
	baseSixtheen++;
	}

	baseSixtheen = 'a';

	while (baseSixtheen <= 'f')
	{
	putchar(baseSixtheen);
	baseSixtheen++;
	}
	putchar('\n');
	return (0);
}
