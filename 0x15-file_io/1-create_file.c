#include "main.h"

/**
 * create_file -A function to Creates a file.
 * @filename: A pointer to the name of the file to create.
 * @text_content: A pointer to a string that writes to the file.
 * Return: onSucess 1 otherwise -1
 */

int create_file(const char *filename, char *text_content)
{
	int o, w, counter = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (counter = 0; text_content[counter];)
			counter++;
	}

	o = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(o, text_content, counter);

	if (o == -1 || w == -1)
		return (-1);

	close(o);

	return (1);
}
