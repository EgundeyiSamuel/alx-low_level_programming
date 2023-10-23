#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - Print the sum of diagonals in a square matrix.
 *
 * This function calculates and prints the sum of both the main diagonal
 * and the secondary diagonal of a square matrix 'a' of size 'size'.
 *
 * @a: Pointer to the square matrix.
 * @size: The size of the square matrix.
 */
void print_diagsums(int *a, int size)
{
	int main_diag_sum = 0;
	int secondary_diag_sum = 0;
	int x;

	for (x = 0; x < size; x++)
	{
		main_diag_sum += a[x * size + x];
		secondary_diag_sum += a[x * size + (size - x - 1)];
	}

	printf("%d, %d\n", main_diag_sum, secondary_diag_sum);
}
