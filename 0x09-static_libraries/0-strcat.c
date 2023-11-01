#include "main.h"
/**
 * _strcat - function appends the src string to the dest string
 * @dest: destination's pointer
 * @src: source string pointer
 * Return: Returns a string dest with a given pointer
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;
	int k;

while (src[i] != '\0')
{
i++;
}
while (dest[j] != '\0')
{
j++;
}
for (k = j; k < (i + j); k++)
{
dest[k] = src[k - j];
}
dest[k] = '\0';
return (dest);
}
