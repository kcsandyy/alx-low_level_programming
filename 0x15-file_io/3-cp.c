#include <stdlib.h>
#include <stdio.h>
#include "main.h"
#include <fcntl.h>
#include <unistd.h>

#define size 1024

/**
 * handles_errors - Handles errors
 * @code: The exit code
 * @message: The error message
 * @file: The file generating the error
 * Return: Void
 */
void handles_error(int code, const char *message, const char *file)
{
	dprintf(code, "Error: %s %s", message, file);
	exit(code);
}

void cp(const char *file1 ,const char *file2)
{
	char buffer[size];
	int file_from, file_to;
	size_t read_bytes, written_bytes;

	file_from = open(file1, O_RDONLY);
	if (file_from == -1)
		handles_error(98, "can't read from file\n", file1);
	file_to = open(file2, O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (file_to == -1)
		handles_error(99, "can't write to\n", file2);

	while ((read_bytes = read(file_from, buffer, sizeof(buffer))) > 0)
	{
		if (read_bytes == (size_t)(-1))
			handles_error(98, "can't read from file\n", file1);
		written_bytes = write(file_to, buffer, read_bytes);
		if (written_bytes == (size_t)(-1))
			handles_error(99, "can't write to\n", file2);
	}

	if (close(file_from) == -1)
		handles_error(100, "can't close fd\n", file1);
	if (close(file_to) == -1)
		handles_error(100, "can't close fd\n", file2);
}

/**
 * main - Copies files
 * @argc: The number of arguments
 * @argv: The arguments
 * Return: 0 if successful
 */

int main(int argc, const char *argv[])
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	cp(argv[1], argv[2]);

	return (0);
}
