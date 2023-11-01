/**
 * _memset - Fill memory with a constant byte.
 *
 * This function fills the first n bytes of the memory area pointed to by s
 * with the constant byte b.
 *
 * @s: Pointer to the memory area to be filled.
 * @b: The constant byte used to fill the memory.
 * @n: The number of bytes to fill with the constant byte.
 *
 * Return: A pointer to the memory area s.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		s[x] = b;
	}
	return (s);
}
