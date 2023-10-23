#include "main.h"
/**
 * print_chessboard - Print a chessboard.
 *
 * This function prints an 8x8 chessboard represented as a 2D array of characters.
 *
 * @a: The 2D array representing the chessboard.
 */
void print_chessboard(char (*a)[8])
{
	int row, column;

	for (row = 0; row < 8; row++)
	{
	for (column = 0; column < 8; column++)
	{
		_putchar(a[row][column]);
	}
 		_putchar('\n');
	}
}
