#include <stdio.h>
#include <unistd.h>
/**
 * main - prints text using the write function
 * Return: 1 (unsuccessful)
 */
int main(void)
{
	write(2, "and that place of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
