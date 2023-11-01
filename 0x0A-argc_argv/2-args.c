#include <stdio.h>
/**
* main -  print the result of the multiplication, followed by a new line
* @argc: the argument count
* @argv: argument vector
* Return: 0
*/

int main(int argc, char *argv[])
{
	int i;

	for (i = 0 ; i < argc ; i++)
		printf("%s\n", argv[i]);
	return (0);
}
