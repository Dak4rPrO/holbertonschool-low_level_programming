#include "main.h"

/**
 * append_text_to_file - function that appends text at the end of a file.
 * @filename: is the name of the file.
 * @text_content: is the NULL terminated string to add at the end of the file.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int num, i = 0;

	num = open(filename, O_RDWR | O_APPEND);

	if (num == -1)
		return (-1);

	if (filename == NULL)
		return (-1);

 	i = strlen(text_content);
	
	if (text_content == NULL)
		write(num, text_content, i);

	close(num);

        return (1);
}
