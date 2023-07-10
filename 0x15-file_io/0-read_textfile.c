#include "main.h"
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>

/**
 * read_textfile - Reads a text file and prints it to the POSIX standard output
 * @filename: name of the file to read
 * @letters: number of letters it should read and print
 *
 * Return: actual number of letters that can be read and printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fid;
	ssize_t lenx, leny;
	char *buffer;

	if (filename == NULL)
		return (0);
	fid = open(filename, O_RDONLY);
	if (fid == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(fid);
		return (0);
	}
	lenx = read(fid, buffer, letters);
	close(fid);
	if (lenr == -1)
	{
		free(buffer);
		return (0);
	}
	leny = write(STDOUT_FILENO, buffer, lenx);
	free(buffer);
	if (lenx != leny)
		return (0);
	return (leny);
}
