#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers and outputs the result.
 * @argc: the number of arguments.
 * @argv: the array of arguments.
 * Return: 0 on success, 1 on error.
 */

int main(int argc, char *argv[])
{
	int i, j, mul;

	if (argc != 3)
	{
	printf("Error\n");
	return (1);
	}

	i = atoi(argv[1]);
	j = atoi(argv[2]);
	mul = i * j;

	printf("%d\n", mul);
	return (0);
}
