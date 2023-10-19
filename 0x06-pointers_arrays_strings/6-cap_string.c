#include "main.h"

/**
 * cap_string - Capitalize the first letter of each word in a string.
 *
 * @str: The input string.
 *
 * Return: A pointer to the modified string.
 */
char *cap_string(char *str)
{
	int i = 0;
	int cap_next = 1;

	while (str[i] != '\0')
	{
	if (cap_next)
	{
	if (str[i] >= 'a' && str[i] <= 'z')
	str[i] = str[i] - 32;
	cap_next = 0;
	}

	if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
	str[i] == ',' || str[i] == ';' || str[i] == '.' ||
	str[i] == '!' || str[i] == '?' || str[i] == '"' ||
	str[i] == '(' || str[i] == ')' || str[i] == '{' || str[i] == '}')
	{
	cap_next = 1;
	}

	i++;
	}

	return (str);
}
