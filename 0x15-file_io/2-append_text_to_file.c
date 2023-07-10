#include "main.h"

/**
 * append_text_to_file - function that appends text at the end of a file
 * @filename: filename.
 * @text_content: added content.
 *
 * Return: 1 if the file exists. -1 if it does not exist
 * or if it fails.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fid;
	int nletters;
	int rwr;

	if (!filename)
		return (-1);

	fid = open(filename, O_WRONLY | O_APPEND);

	if (fid == -1)
		return (-1);

	if (text_content)
	{
		for (nletters = 0; text_content[nletters]; nletters++)
			;

		rwr = write(fid, text_content, nletters);

		if (rwr == -1)
			return (-1);
	}

	close(fid);

	return (1);
}
