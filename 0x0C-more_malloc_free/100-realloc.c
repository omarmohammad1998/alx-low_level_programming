#include "main.h"
#include <stdlib.h>

/**
 * *_realloc - allocates a memory
 * @ptr: ponter to memory
 * @old_size: size in pytes
 * @new_size: size in pyets
 *
 * Retrun: NULL if new_size = 0 ptr is not NULL.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *old_ptr;
	char *ptrl;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}
	if (!ptr)
		return (malloc(new_size));
	ptrl = malloc(new_size);
	if (!ptrl)
		return (NULL);

	old_ptr = ptr;

	if (new_size < old_size)
	{
		for (i = 0; i < new_size; i++)
			ptrl[i] = old_ptr[i];
	}

	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
			ptrl[i] = old_ptr[i];
	}

	free(ptr);
	return (ptrl);
}
