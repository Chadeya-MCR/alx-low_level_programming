#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"

/**
 * create_file - Creates a file with specified text content.
 * @filename: The name of the file to create.
 * @text_content: The text content to write to the file.
 *
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{	int fd = 0;
	ssize_t text_len = 0;
	ssize_t bytes_written = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600)
		;
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		text_len = 0;

		while (text_content[text_len])
			text_len++;

		bytes_written = write(fd, text_content, text_len);

		close(fd);

		if (bytes_written != text_len)
			return (-1);
	}
	else
	{
		close(fd);
	}

	return (1);
}

