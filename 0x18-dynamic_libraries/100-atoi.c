#include "main.h"
/**
 * _atoi - Convert a string to integer
 * @s: char array string
 * Return: integer
 */
int _atoi(char *s)
{
	int len, count, sign;

	count = 0;
	sign = -1;

	for (len = 0; s[len] != '\0'; len++)
	{
		if (s[len] == '-')
			sign *= -1;

		if (s[len] > 47 && s[len] < 58)
		{
			if (count < 0)
				count = (count * 10) - (s[len] - '0');
			else
				count = (s[len] - '0') * -1;

			if (s[len + 1] < 48 || s[len + 1] > 57)
				break;
		}
	}
	if (sign < 0)
		count *= -1;

	return (count);
}
