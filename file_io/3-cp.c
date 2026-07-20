#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

void close_file(int file);
void copy_file(int fl_from, int fl_to, char *fd_from, char *fd_to);

/**
 * main - copies content of file to another file
 * @argc: nbr of arguments passed
 * @argv: pointers to arguments
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	int file_from, file_to;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		close_file(file_from);
		exit(99);
	}

	copy_file(file_from, file_to, argv[1], argv[2]);

	close_file(file_from);
	close_file(file_to);

	return (0);
}

/**
 * copy_file - reads from source and writes to destination via buffer
 * @fl_from: file descriptor of source
 * @fl_to: file descriptor of destination file
 * @fd_from: source file's name
 * @fd_to: destination file's name
 */
void copy_file(int fl_from, int fl_to, char *fd_from, char *fd_to)
{
	ssize_t bytes_read, bytes_written;
	char buffer[1024];

	while ((bytes_read = read(fl_from, buffer, 1024)) > 0)
	{
		bytes_written = write(fl_to, buffer, bytes_read);
		if (bytes_written == -1 || bytes_written != bytes_read)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", fd_to);
			close_file(fl_from);
			close_file(fl_to);
			exit(99);
		}
	}

	if (bytes_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", fd_from);
		close_file(fl_from);
		close_file(fl_to);
		exit(98);
	}
}

/**
 * close_file - closes file descriptor and exits (if it fails)
 * @file: file descriptor to close
 */
void close_file(int file)
{
	if (close(file) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file);
		exit(100);
	}
}
