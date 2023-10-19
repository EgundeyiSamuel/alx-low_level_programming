#include "main.h"
i
/**
 * string_toupper - Convert a string to uppercase.
 *
 * @str: The input string.
 *
 * Return: A pointer to the modified string.
 */
char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
	if (str[i] >= 'a' && str[i] <= 'z')
	{
	str[i] = str[i] - 32;
	}
	i++;
	}

	return (str);
}
