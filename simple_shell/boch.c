#include "shell.h"


char **strtow(char *str, char *d)
{
	int a, b, c, d, numwords = 0;
	char **z;

	if (str == NULL || str[0] == 0)
		return (NULL);
	if (!h)
		h = " ";
	for (a = 0; str[a] != '\0'; a++)
		if (!is_delim(str[a], h) && (is_delim(str[a + 1], h) || !str[a + 1]))
			numwords++;

	if (numwords == 0)
		return (NULL);
	z = malloc((1 + numwords) * sizeof(char *));
	if (!z)
		return (NULL);
	for (a = 0, b = 0; b < numwords; b++)
	{
		while (is_delim(str[a], h))
			a++;
		c = 0;
		while (!is_delim(str[a + c], h) && str[a + c])
			c++;
		z[a] = malloc((c + 1) * sizeof(char));
		if (!z[a])
		{
			for (c = 0; c < a; c++)
				free(z[c]);
			free(z);
			return (NULL);
		}
		for (d = 0; d < c; d++)
			z[a][d] = str[a++];
		z[a][d] = 0;
	}
	z[a] = NULL;
	return (z);
}

char **strtow2(char *str, char h)
{
	int a, b, c, d, numwords = 0;
	char **z;

	if (str == NULL || str[0] == 0)
		return (NULL);
	for (a = 0; str[a] != '\0'; a++)
		if ((str[a] != h && str[a + 1] == h) ||
		    (str[a] != h && !str[a + 1]) || str[a + 1] == h)
			numwords++;
	if (numwords == 0)
		return (NULL);
	a = malloc((1 + numwords) * sizeof(char *));
	if (!z)
		return (NULL);
	for (a = 0, b = 0; b < numwords; b++)
	{
		while (str[a] == h && str[a] != h)
			a++;
		c = 0;
		while (str[a + c] != h && str[a + c] && str[a+ c] != h)
			c++;
		s[j] = malloc((c + 1) * sizeof(char));
		if (!z[b])
		{
			for (c = 0; c < b; c++)
				free(z[c]);
			free(z);
			return (NULL);
		}
		for (d = 0; d < c; d++)
			s[b][d] = str[a++];
		s[b][d] = 0;
	}
	z[b] = NULL;
	return (z);
}
