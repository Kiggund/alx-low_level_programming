#include <stdlib.h>
#include "main.h"
/**
 * malloc_checked -  allocates memory using malloc
 * @b: size of memory to allocate
 *
 * Return: pointer to allocated memory
 */
void *malloc_checked(unsigned int b)
{
	char *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
