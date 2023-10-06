#include <stdio.h>
/**
 * main -  Prints all single digit numbers of base 10 starting from 0
 *
 * Return: Returns (0);
 */
int main(void)
{
	int single_no;

	for (single_no = 0; single_no < 10; single_no++)
	{
	printf("%d", single_no);
	}
	putchar('\n');
	return (0);
}
