#include <stdio.h>
/**
* main - Prints all possible combinations of single-digit numbers
* Return: Returns(0) Sucess
*/
int main(void)
{
	int no = 0;

	while (no <= 9)
	{
	putchar(no + '0');
	if (no != 9)
	{
	putchar(',');    /*prints a comma*/
	putchar(' ');   /* prints a space*/
	}
	no++;
	}
	putchar('\n');
	return (0);
}
