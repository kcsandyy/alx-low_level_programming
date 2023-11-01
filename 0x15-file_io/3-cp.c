#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
#include <errno.h>
#include <unistd.h>

#define Buffer_size 1024

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
		dprintf(STDERR_FILENO, "Error: can't read from file %s\n", file1);
		_Exit(98);
	}
	file2 = argv[2];
	file_to = open(file2, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH);
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't write to %s\n", file2);
		_Exit(99);
	}
	while ((read_bytes = read(file_from, buffer, Buffer_size)) > 0)
	{
		if (read_bytes == (size_t)(-1))
		{
			dprintf(STDERR_FILENO, "Error: can't read from file %s\n", file1);
			_Exit(98);
		}
		written_bytes = write(file_to, buffer, read_bytes);
		if (written_bytes != read_bytes)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file2);
			_Exit(99);
		}
	}
	if (close(file_from) == -1 || close(file_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't close fd %d\n", file_from > file_to ? file_from:file_to);
		_Exit(100);
	}
	return (0);
}
