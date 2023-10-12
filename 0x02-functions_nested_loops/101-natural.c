#include <stdio.h>
/**
* main - Function that sums up multiples of 3 and 5
* Return: Returns (0) Always
*/
int main(void)
{
	int total = 0;
	int x;

	for (x = 0; x <= 1023; x++)
	{
	if (x % 3 == 0 || x % 5 == 0)
		total = total + x;
	}
	printf("%d\n", total);
	return (0);
}
