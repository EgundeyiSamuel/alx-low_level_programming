#include "main.h"
#include <stdio.h>
/**
* _strlen -  a function that returns the length of a string.
* @s: paramather that holds length of string
* Return: Returns (0) Always
*/

int _strlen(char *s)
{
	int x;
	int step = 0;

	for (x = 0; s[x] != '\0'; x++)
		step++;
	return (step++);
}
