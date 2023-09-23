#include <stdio.h>
#include "main.h"
/**
 * main - print the number of arguments passed to the program
 * @argv: array of arguments
 * @argc: number of arguments
 * Return: 0 on success, or else 1
 */
int main(int argc, char *argv[])
{
(void) argv; /*Ignore argv*/
	printf("%d\n", argc - 1);

	return (0);
}
