#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "main.h"

/**
 * read_textfile - Reads and prints a text file to standard output.
 * @filename: The name of the file to read.
 * @letters: The number of letters to read and print.
 *
 * Return: The number of letters actually read and printed. 0 on error.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *file = 0;
	char *buffer = 0;
	ssize_t bytes_read = 0;
	ssize_t bytes_written = 0;

	bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
	bytes_read = fread(buffer, sizeof(char), letters, file);
	buffer = malloc(sizeof(char) * (letters + 1));
	file = fopen(filename, "r");

	if (filename == NULL)
		return(0);
	if (file == NULL)
		return (0);
	if (buffer == NULL)
	{
		fclose(file);
		return (0);
	}
	if (bytes_read <= 0)
	{
		fclose(file);
		free(buffer);
		return (0);
	}
	buffer[bytes_read] = '\0';
	if (bytes_written != bytes_read)
	{
		fclose(file);
		free(buffer);
		return (0);
	}
	fclose(file);
	free(buffer);
	return (bytes_written);
}

