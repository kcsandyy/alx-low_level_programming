#include <unistd.h>

/**
 * _putchar - writes character to stdoutput
 * Return: 1 on success
 */
int _putchar(char c)
{
        return(write(1, &c, 1));
}
