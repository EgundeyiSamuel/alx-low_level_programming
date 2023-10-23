/**
 * _memcpy - Copy memory from source to destination.
 *
 * This function copies `n` bytes of memory from the `src` to the `dest`.
 *
 * @dest: Pointer to the destination memory.
 * @src: Pointer to the source memory.
 * @n: Number of bytes to copy.
 *
 * Return: A pointer to the destination memory.
 */
char *_memcpy(char *dest, const char *src, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
	dest[x] = src[x];
	}

	return (dest);
}
