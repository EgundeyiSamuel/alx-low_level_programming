#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: Input string
 * Return: String in reverse
 */

void rev_string(char *s)
{
	char rev = s[0];
	int step = 0;
	int i;

	while (s[step] != '\0')
	step++;
	for (i = 0; i < step; i++)
	{
		step--;
		rev = s[i];
		s[i] = s[step];
		s[step] = rev;
	}
}
