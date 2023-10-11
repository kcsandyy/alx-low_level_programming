#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - performs simple operations
 * @argc: argument count
 * @argv: argument vector
 * Return: prints the result of the operation,
 */
int main(int argc, char *argv[])
{
	char *sign;
	int i, j, result;
	int (*fun)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		_Exit(98);
	}
	i = atoi(argv[1]);
	j = atoi(argv[3]);
	sign = argv[2];

	fun = get_op_func(sign);
	if (fun == NULL || *(sign + 1) != '\0')
	{
		printf("Error\n");
		_Exit(99);
	}

	result = fun(i, j);
	printf("%d\n", result);

	return (0);
}
