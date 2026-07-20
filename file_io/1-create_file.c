#include "main.h"
#include <unistd.h>
#include <fcntl.h>

/**
 * create_file - creates a file and writes text content to it
 * @filename: pointer to file's name
 * @text_content: NULL-terminated string to write to the file
 *
 * Return: 1 or  -1
 */
int create_file(const char *filename, char *text_content)
{
	int file;
	int len = 0;
	ssize_t b_written;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (file == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[len] != '\0')
			len++;

		b_written = write(file, text_content, len);
		if (b_written == -1 || b_written != len)
		{
			close(file);
			return (-1);
		}
	}

	close(file);
	return (1);
}
