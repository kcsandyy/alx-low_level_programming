#include "main.h"
/**
 * print_triangle - prints a triangle
 * @size: size of the triangle
 * Return: void
 */
void print_triangle(int size)
{
	int height, spaces, width;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (height = 1; height <= size; height++)
		{
			for (spaces = size - height; spaces >= 1; spaces--)
			{
				_putchar(' ');
			}
			for (width = 1; width <= height; width++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
