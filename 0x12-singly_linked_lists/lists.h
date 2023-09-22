#ifndef _LISTS_H
#define _LISTS_H

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: lenght of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * for Hlberton project
 */

typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;
