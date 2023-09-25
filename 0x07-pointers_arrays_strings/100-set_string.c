#include "main.h"
/**
 * set_string - sets the value of a pointer to a char
 * @s: A pointer to a pointer
 * @to: The pointer to char
 * Return: void
 */
void set_string(char **s, char *to)
{
	*s = to;
}
