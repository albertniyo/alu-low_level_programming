#include "main.h"
#include <unistd.h>
#include <fcntl.h>

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: pointer to file's name
 * @text_content: NULL-terminated string to add at files's end
 *
 * Return: 1 or -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file;
	int len = 0;
	ssize_t b_written;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_WRONLY | O_APPEND);
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
