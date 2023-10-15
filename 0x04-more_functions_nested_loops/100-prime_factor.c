#include <stdio.h>
#include <math.h>

/**
 * main - finds and prints the largest prime factor of the number 612852475143
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int n;
	long int top;
	long int x;

	n = 612852475143;
	top = -1;

	while (n % 2 == 0)
	{
		top = 2;
		n /= 2;
	}

	for (x = 3; x <= sqrt(n); x = x + 2)
	{
		while (n % x == 0)
		{
			top = x;
			n = n / x;
		}
	}

	if (n > 2)
		top = n;

	printf("%ld\n", top);

	return (0);
}
