#include <stdio.h>
/**
* main - program that prints the alphabet in lowercase, tehn a newine
* Return: Returns (0) Sucess
*/
int main(void)
{
	char az = 'a';

	while (az <= 'z')
	{
	putchar (az);
	az++;
	}
	putchar('\n');
	return (0);
}
