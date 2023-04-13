#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat - function that concatenates two strings.
 * @s1: input
 * @s2: input
 * @n: input
 * Return: output
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, k, l;
	char *ar;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	i = 0;
	while (s1[i] != '\0')
		i++;
	j = 0;
	while (s2[j] != '\0' && j < n)
		j++;
	if (n <= j)
		n = j;

	ar = malloc(sizeof(char) * (i + n + 1));

	if (ar == NULL)
		return (NULL);

	for (k = 0; k < i; k++)
		ar[k] = s1[k];

	for (l = 0; s2[l] != '\0' && l != n; l++, i++)
		ar[i] = s2[l];

	ar[i] = '\0';
	return (ar);
}
