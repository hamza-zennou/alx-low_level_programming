#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - function that allocates memory using malloc.
 * @b: input
 * Return: output
 */
void *malloc_checked(unsigned int b)
{
	int *ar;

	ar = malloc(b);
	if (ar == NULL)
	{
		exit(98);
	}
	return (ar);
}
