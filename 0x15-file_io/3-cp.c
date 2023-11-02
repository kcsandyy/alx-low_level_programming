#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
#include <errno.h>
#include <unistd.h>

#define Buffer_size 1024

void handles_error(int code, char *message, char *file);
char *greater(char *file1, char *file2);

/**
 * handles_error - Handles errors that arise
 * @code: The exit code
 * @message: The error message
 * @file: The file that resulted in the error
 * Return: Void
 */

void handles_error(int code, char *message, char *file)
{
	dprintf(code, "Error: %s %s", message, file);
	_Exit(code);
}

/**
 * greater - checks a file with the higher value
 * @file1: The first file
 * @file2: The other file
 * Return: The greater file with the max value
 */

char *greater(char *file1, char *file2)
{
	return (file1 > file2 ? file1 : file2);
}

/**
 * main - copies the content of a file to another file
 * @argc: Number of arguments
 * @argv: The arguments
 * Return: 0 (Success)
 */

int main(int argc, char *argv[])
{
	char buffer[Buffer_size], *file1, *file2;
	int file_from, file_to;
	size_t read_bytes, written_bytes;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		_Exit(97);
	}

	file1 = argv[1];
	file_from = open(file1, O_RDONLY);
	if (file_from == -1)
	{
		handles_error(98, "can't read from file", file1);
	}

	file2 = argv[2];
	file_to = open(file2, O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (file_to == -1)
	{
		handles_error(99, "can't write to", file2);
	}
	while ((read_bytes = read(file_from, buffer, Buffer_size)) > 0)
	{
		if (read_bytes == (size_t)(-1))
		{
			handles_error(98, "can't read from file", file1);
		}
		written_bytes = write(file_to, buffer, read_bytes);
		if (written_bytes != read_bytes)
		{
			handles_error(99, "can't write to", file2);
		}
	}
	if (close(file_from) == -1 || close(file_to) == -1)
	{
		handles_error(100, "can't close fd", greater(file1, file2));
	}
	return (0);
}
