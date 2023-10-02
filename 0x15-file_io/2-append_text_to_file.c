#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: The name of the file.
 * @text_content: The text to append.
 *
 * Return: 1 on success, -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	ssize_t text_len = 0;
	int fd = 0;
	ssize_t bytes_written = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
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

