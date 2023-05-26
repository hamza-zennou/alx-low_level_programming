#include "shell.h"


char *_memset(char *z, char j, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		z[i] = j;
	return (z);
}


void ffree(char **pa)
{
	char **a = pa;

	if (!pa)
		return;
	while (*pa)
		free(*pa++);
	free(a);
}


void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *ps;

	if (!ptr)
		return (malloc(new_size));
	if (!new_size)
		return (free(ptr), NULL);
	if (new_size == old_size)
		return (ptr);

	ps = malloc(new_size);
	if (!ps)
		return (NULL);

	old_size = old_size < new_size ? old_size : new_size;
	while (old_size--)
		ps[old_size] = ((char *)ptr)[old_size];
	free(ptr);
	return (ps);
}
