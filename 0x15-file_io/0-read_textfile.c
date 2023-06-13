#include "main.h"
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>

/**
 * read_textfile - Reads a text file and prints it to the POSIX standard output
 * @filename: name of the file to read
 * @letters: number of letters it should read and print
 *
 * Return:  the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int m;
	ssize_t lenU, lenV;
	char *buffer;

	if (filename == NULL)
		return (0);
	m = open(filename, O_RDONLY);
	if (m == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(m);
		return (0);
	}
	lenU = read(m, buffer, letters);
	close(m);
	if (lenU == -1)
	{
		free(buffer);
		return (0);
	}
	lenV = write(STDOUT_FILENO, buffer, lenU);
	free(buffer);
	if (lenU != lenV)
		return (0);
	return (lenV);
}
