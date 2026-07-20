#include "main.h"
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

/**
 * read_textfile - reads text file and prints it to POSIX stdout
 * @filename: pointer to file name
 * @letters: nber of letters it should read and print
 *
 * Return: nbr of bytes read and printed or 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	ssize_t b_read, b_written;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	file = open(filename, O_RDONLY);
	if (file == -1)
	{
		free(buffer);
		return (0);
	}

	b_read = read(file, buffer, letters);
	if (b_read == -1)
	{
		free(buffer);
		close(file);
		return (0);
	}

	b_written = write(STDOUT_FILENO, buffer, b_read);
	if (b_written == -1 || b_written != b_read)
	{
		free(buffer);
		close(file);
		return (0);
	}

	free(buffer);
	close(file);

	return (b_written);
}
