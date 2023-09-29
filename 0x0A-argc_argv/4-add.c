#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: argument count
 * @argv: argument vector
 * Return: success 0
 */

int main(int argc, char *argv[])
{
	int i, a, sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		a = atoi(argv[i]);
		if (a == 0 && argv[i][0] != '0')
		{
			printf("Error\n");
			return (1);
		}
		if (a < 0)
		{
			printf("Error\n");
			return (1);
		}
		sum += a;
	}
	printf("%d\n", sum);
	return (0);
}
