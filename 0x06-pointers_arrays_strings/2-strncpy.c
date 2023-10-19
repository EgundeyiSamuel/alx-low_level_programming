#include "main.h"
/**
 * _strncpy - function for copying a string
 * @dest: pointer dest
 * @src: pointer for string in src
 * @n: counts
 * Return: Reurns dest's pointer
 */
char *_strncpy(char *dest, char *src, int n)
{
int i = 0;

while (i < n && src[i] != '\0')
{
dest[i] = src[i];
i++;
}

while (i < n)
{
dest[i] = '\0';
i++;
}

return (dest);

}