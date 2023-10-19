#include "main.h"
#include <stdio.h>

/**
 * leet - Replace specific characters in a string with leetspeak equivalents.
 *
 * @str: The input string.
 *
 * Return: A pointer to the modified string.
 */
char *leet(char *str)
{
	int i, j;
	char leet_chars[] = "aAeEoOtTlL";
	char leet_replacements[] = "4433007711";

	for (i = 0; str[i] != '\0'; i++)
	{
	for (j = 0; j < 10; j++)
	{
	if (str[i] == leet_chars[j])
	{
	str[i] = leet_replacements[j];
	break;
	}
	}
	}

	return (str);
}
