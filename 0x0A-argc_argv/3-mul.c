#include <stdio.h>
#include <stdlib.h>
/**
* main -  print the result of the multiplication, followed by a new line
* @argc: the argument count
* @argv: argument vector
* Return: 0
*/
int main(int argc, char *argv[])
{
	int x, y, result = 0;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		x = atoi(argv[1]);
		y = atoi(argv[2]);

		result = x * y;
		printf("%d\n", result);
	}
	return (0);
}
