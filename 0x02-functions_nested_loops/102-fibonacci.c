#include <stdio.h>
/**
* main - prints the first 50 Fibonacci numbers, starting with 1 and 2
* Return: Returns (0) Always
*/

int main(void)
{
	unsigned long int space_x = 1;
	unsigned long int space_y = 2;
	int y;
	unsigned long int space_z;

	printf("%lu, ", space_x);
	for (y = 1 ; y < 50 ; y++)
	{
		printf("%lu", space_y);
		space_z = space_x + space_y;
		space_x = space_y;
		space_y = space_z;
		if (y != 49)
			printf(", ");
	}
	printf("\n");
	return (0);
}
