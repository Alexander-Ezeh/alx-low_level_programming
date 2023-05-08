#include "main.h"
#include <stdlib.h>

/**
 * The function read_textfile reads a text file and
 * prints its contents to the standard output (STDOUT).
 * @param filename The name of the file to read.
 * @param letters The maximum number of letters to read from the file.
 * @return The actual number of bytes read and printed to STDOUT.
 * If the function fails or filename is NULL, it returns 0.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t w;
	ssize_t t;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	t = read(fd, buf, letters);
	w = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(fd);
	return (w);
}
