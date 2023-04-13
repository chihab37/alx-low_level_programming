#include <stdlib.h>
#include "main.h"
#include <string.h>
/**
  *_realloc - reallocates a memory block using malloc and free
  *@ptr: pointer to the memory previously allocated with malloc
  *@old_size: the size, in bytes, of the allocated space for ptr
  *@new_size: the new size, in bytes, of the new memory block
  *Return: a pointer to the reallocated memory block, or NULL on failure
  *If new_size is equal to zero, and ptr is not NULL,
  *then the call is equivalent to free(ptr) and returns NULL
  */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;

	if (ptr == NULL)
		return (malloc(new_size));
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (new_size == old_size)
		return (ptr);

	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
		return (NULL);

	memcpy(new_ptr, ptr, old_size < new_size ? old_size : new_size);
	free(ptr);

	return (new_ptr);
}
