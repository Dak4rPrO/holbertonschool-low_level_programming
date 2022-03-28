#include "main.h"

/**
* create_file - function that creates a file.
* @filename: name of the file to create.
* @text_content: is a NULL terminated string to write to the file.
* Return: Returns: 1 on success, -1 on failure.
*/

int create_file(const char *filename, char *text_content)
{
	int num, i = 0;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	num = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);

	i = strlen(text_content);

	write(num, text_content, i);

	if (num == -1)
	{
		return (-1);
	}

	close(num);

	return (1);
}
