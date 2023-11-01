#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

/**
* main - adds positives numbers
* @argc: arguemt count
* @argv: argument vector
* Return: Returns (0) Always
*/

int main(int argc, char *argv[])
{
	int x, y;
	int sum = 0;

	if (argc == 1)
		printf("%d\n", 0);
	else
	{
		for (x = 1 ; x < argc ; x++)
		{
			for (y = 0 ; argv[x][y] != '\0' ; y++)
			{
				if (!(isdigit(argv[x][y])))
				{
					printf("Error\n");
					return (1);
				}
			}
			sum = sum + atoi(argv[x]);
		}
		printf("%d\n", sum);
	}
	return (0);
}
