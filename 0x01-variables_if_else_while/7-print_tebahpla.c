#include <stdio.h>
/**
* main - Prints the lowercase alphabet in reverse, followed by new line
* Return: Returns (0) Sucess
*/
int main(void)
{
	char barca = 'z';

	while (barca >= 'a')
	{
	putchar(barca);
	barca--;
	}
	putchar('\n');
	return (0);
}
