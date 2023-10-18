#include "shell.h"

/**
 * _memset - Fills memory with a constant byte
 * @s: Pointer to the memory area
 * @b: The byte to fill *s with
 * @n: The number of bytes to be filled
 *
 * Return: Pointer to the memory area @s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}

/**
 * ffree - Frees a string of strings
 * @str_arr: String of strings
 */
void ffree(char **str_arr)
{
	char **temp = str_arr;

	if (!str_arr)
		return;

	while (*str_arr)
		free(*str_arr++);

	free(temp);
}

/**
 * _realloc - Reallocates a block of memory
 * @ptr: Pointer to the previous dynamically allocated block
 * @old_size: Size of the previous block in bytes
 * @new_size: Size of the new block in bytes
 *
 * Return: Pointer to the reallocated block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_ptr;

	if (!ptr)
		return (malloc(new_size));

	if (!new_size)
	{
		free(ptr);
		return (NULL);
	}

	if (new_size == old_size)
		return (ptr);

	new_ptr = malloc(new_size);
	if (!new_ptr)
		return (NULL);

	old_size = old_size < new_size ? old_size : new_size;
	while (old_size--)
		new_ptr[old_size] = ((char *)ptr)[old_size];

	free(ptr);
	return (new_ptr);
}
