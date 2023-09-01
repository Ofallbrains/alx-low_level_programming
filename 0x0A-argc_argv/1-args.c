#include <stdio.h>
#include "main.h"
/**
 * main - program that prints the number of arguments passed into it.
 * @argc: number of cmd line argument
 * @argv: array of cmd arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
(void) argv; /*Ignore argv*/
	printf("%d\n", argc - 1);

	return (0);
}
