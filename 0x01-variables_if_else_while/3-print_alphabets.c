#include <stdio.h>
/**
* main -  Prints the alphabet in lowercase, uppercase then and new line
* Return: Returns (0) Sucess
*/
int main(void)
{
	char lower_case = 'a';
	char capslk = 'A';

	while (lower_case <= 'z')
	{
	putchar (lower_case);
	lower_case++;
	}
	while (capslk <= 'Z')
	{
	putchar (capslk);
	capslk++;
	}
	putchar('\n');
	return (0);
}
