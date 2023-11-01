#include <stdio.h>
/**
* main - Write a program that prints its name, followed by a new line.
* @argc: counts arguemt
* @argv: stores the argument vector
* Return: Returns (0) Always
*/
int main(int argc, char *argv[])
{
	(void) argc;

	printf("%s\n", argv[0]);
	return (0);
}
