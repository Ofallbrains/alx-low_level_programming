#include <stdio.h>
/**
 * main - program prints all arguments it receives
 * @argc: number of cmd arguments
 * @argv: array of number of cmd arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
