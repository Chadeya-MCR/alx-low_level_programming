/**
 * _memcpy - Copies a memory area.
 * @dest: points to destination memory area.
 * @src: Points to the source memory area.
 * @n: Number of bytes to be copied.
 *
 * Description: This function copies n bytes
 * from the memory area pointed to by src
 * to the memory area pointed to by dest.
 *
 * Return: Pointer to the destination memory area (dest).
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
	dest[i] = src[i];
	}

	return (dest);
}

