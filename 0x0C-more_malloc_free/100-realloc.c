#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _realloc - function that reallocates a memory block using malloc and free.
 * @ptr: input
 * @old_size: input
 * @new_size: input
 * Return: output
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *ar;

	if (new_size == old_size)
	{
		return (ptr);
	}
	if (ptr == NULL)
	{
		ar = malloc(sizeof(char) * new_size);
		if (ar == NULL)
		{
			return (NULL);
		}
		else
		{
			free(ptr);
			return (ar);
		}
	}
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	ar = malloc(sizeof(char) * new_size);
	if (ar == NULL)
	{
		free(ptr);
		return (NULL);
	}
	else
	{
		free(ptr);
		return (ar);
	}
}
