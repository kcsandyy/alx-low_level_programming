#include "main.h"
#include <unistd.h>
#include <fcntl.h>

/**
 * create_file - creates a file
 * @filename: Name of the file to create
 * @text_content: NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int file, len = 0;
	size_t writer;

	if (filename == NULL)
		return (-1);

	while (text_content[len] != '\0')
		len++;

	file = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (file == -1)
		return (-1);

	if (text_content != NULL)
	{
		writer = write(file, text_content, len);
		if (writer == (size_t)(-1))
		{
			close(file);
			return (-1);
		}
	}
	close(file);
	return (1);
}
