#include <stdio.h>
#include <stdlib.h>

/**
 * main - function with two argument
 * @argc: int type argument
 * @argv: char type * pointer argument
 *
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	int quarters, dimes, nickels, penny2, penny;
	int rem1, rem2, rem3, total;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	} else if (atoi(argv[1]) < 0)
	{
		printf("0\n");
	} else
	{
		quarters = atoi(argv[1]) / 25;
		rem1 = atoi(argv[1]) % 25;

		dimes = rem1 / 10;
		rem2  = rem1 % 10;

		nickels = rem2 / 5;
		rem3  = rem2 % 5;

		penny2 = rem3 / 2;
		penny = rem3 % 2;

		total = quarters + dimes + nickels + penny2 + penny;
		printf("%d\n", total);
	}
	return (0);
}
