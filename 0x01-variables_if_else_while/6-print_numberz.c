#include <stdio.h>
/**
* main - Prints all single digit numbers of base 10 starting from 0
* Return: Return(0) Success
*/
int main(void)
{
	int no = 0;

	while (no <= 9)
	{
	putchar(no + '0');
	no++;
	}
	putchar('\n');
	return (0);
}
