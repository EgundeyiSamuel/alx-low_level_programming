#include "main.h"

/**
  * _strncat  - fuction that oncatenates two strings
  *
  * @n: Function parameter
  *
  * @src: parameter
  *
  * @dest: parammeter
  *
  * Return: Return's Dest
  */
char *_strncat(char *dest, char *src, int n)
{
	int k, r;

	k = 0;
	r = 0;

	while (dest[k] != '\0')
	{
	k++;
	}
	while (r < n && src[r] != '\0')
	{
	dest[k] = src[r];
	k++;
	r++;
	}
	dest[k] = '\0';
	return (dest);
}
