#include <stdio.h>
/**
 * main - using putchar to print the alphabet in lowercase and in uppercase
 * Return: 0 sucess
 */
int main(void)
{
	char lower;
	char upper;

	for (lower = 'a'; lower <= 'z'; lower++)
		putchar(lower);
	for (upper = 'A'; upper <= 'Z'; upper++)
		putchar(upper);

	putchar('\n');

	return (0);
}
