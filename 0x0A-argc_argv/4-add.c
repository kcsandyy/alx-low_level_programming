#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

/**
 * main - multiplies two integers
 * @argc: argument count
 * @argv: argument vector
 * Return: success 0
 */

int main(int argc, char *argv[])
{
	int i, j, sum = 0;
	char *a;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		a = argv[i];
		for (j = 0; a[j] != '\0'; j++)
		{
			if (!(isdigit(a[j])))
			{
				printf("Error\n");
				return (1);
			}
		}
	}

	for (i = 1; i < argc; i++)
	{
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
