#include "main.h"

/**
 * _strchr - Locate a character in a string.
 *
 * This function searches for the first occurrence of character `c`
 * in the string `s`.
 *
 * @s: The string to search in.
 * @c: The character to find.
 *
 * Return: A pointer to the first occurrence of the character `c` in `s`,
 * or NULL if `c` is not found.
 */
char *_strchr(char *s, char c)
{
	int x = 0;

	while (s[x] != '\0')
	{
	if (s[x] == c)
		return (s + x);
	x++;
	}

	return (0);
}
