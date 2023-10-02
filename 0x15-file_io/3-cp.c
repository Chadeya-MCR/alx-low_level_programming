#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <errno.h>

/**
 * print_error - Print an error message to the standard error stream
 * @message: The error message format string
 * @arg: The argument to be substituted into the format string
 */
void print_error(const char *message, const char *arg);
/**
 * main - Entry point of the program
 * @argc: The number of command-line arguments
 * @argv: An array of strings containing the command-line arguments
 *
 * Return: 0 on success, various exit codes on error
 */
int main(int argc, char *argv[])
{
	char *file_from;
	char *file_to;
	int fd_from, fd_to;
	char buffer[1024];
	ssize_t bytes_read, bytes_written;

	if (argc != 3)
	{
		print_error("Usage: cp file_from file_to\n", "");
		return (97);
	}


	file_from = argv[1];
	file_to = argv[2];
	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
	{
		print_error("Error: Can't read from file %s\n", file_from);
		return (98);
	}

	fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR |
			S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	if (fd_to == -1)
	{
		print_error("Error: Can't write to file %s\n", file_to);
		close(fd_from);
		return (99);
	}

	while ((bytes_read = read(fd_from, buffer, sizeof(buffer))) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written == -1)
		{
			print_error("Error: Can't write to file %s\n", file_to);
			close(fd_from);
			close(fd_to);
			return (99);
		}
	}

	if (bytes_read == -1)
	{
		print_error("Error while reading from file %s\n", file_from);
		close(fd_from);
		close(fd_to);
		return (99);
	}

	if (close(fd_from) == -1)
	{
		print_error("Error: Can't close fd %d\n", strerror(errno));
		close(fd_to);
		return (100);
	}

	if (close(fd_to) == -1)
	{
		print_error("Error: Can't close fd %d\n", strerror(errno));
		return (100);
	}

	return (0);
}

/**
 * print_error - Print an error message to the standard error stream
 * @message: The error message format string
 * @arg: The argument to be substituted into the format string
 */
void print_error(const char *message, const char *arg)
{
	dprintf(STDERR_FILENO, message, arg);
}

