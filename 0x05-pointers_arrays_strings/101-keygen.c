#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - entry point
 * Return: always 0
 */
int main(void)
{
	int valid_passwd, count, total;

	srand(time(0));
	for (count = 0, total = 2772; total > 122; count++)
	{
		valid_passwd = (rand() % 125) + 1;
		printf("%c", valid_passwd);
		total -= valid_passwd;
	}
	printf("%c\n", total);

	return (0);
}
