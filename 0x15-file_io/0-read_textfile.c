#include "main.h"
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: The textfile
 * @letters: The number of letters it should read and print
 * Return: The actual number of letters it could read and print
 */
size_t read_textfile(const char *filename, size_t letters)
{
	int file;
	size_t writer, reader;
	char *buffer;

	if (filename == NULL)
		return (0);
	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);
	buffer = malloc(letters);
	if (buffer == NULL)
		return (0);
	reader = read(file, buffer, letters);
	if (reader == (size_t)(-1))
	{
		free(buffer);
		close(file);
		return (0);
	}

	writer = write(STDOUT_FILENO, buffer, reader);

	free(buffer);
	close(file);

	if (writer != reader)
		return (0);

	return (reader);
}
