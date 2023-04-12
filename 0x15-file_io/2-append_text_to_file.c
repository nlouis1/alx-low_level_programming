#include "main.h"

/**
 * append_text_to_file - A function that Appends text to the file.
 * @filename: A pointer to the file.
 * @text_content: The string to add to the end of the file.
 * Return: If the function fails or filename is NULL - -1.
 *         If the file does not exist the user lacks write permissions - -1.
 *         Otherwise - 1.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int o, w, counter = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (counter = 0; text_content[counter];)
			counter++;
	}

	o = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, counter);

	if (o == -1 || w == -1)
		return (-1);

	close(o);

	return (1);
}
