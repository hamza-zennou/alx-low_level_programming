#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - function that creates an array of integers.
 * @min: input
 * @max: input
 * Return: output
 */
int *array_range(int min, int max)
{
	int *ar;
	int i = 0;

	if (min > max)
	{
		return (NULL);
	}
	ar = malloc(sizeof(int) * (max - min + 1));
	if (ar == NULL)
	{
		return (NULL);
	}
	while (min <= max)
	{
		ar[i] = min;
		i++;
		min++;
	}
	return (ar);
}
