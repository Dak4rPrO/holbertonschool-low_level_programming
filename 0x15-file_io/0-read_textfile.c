#include "main.h"

/**
 * read_textfile - function that reads a text file
 * and prints it to the POSIX standard output
 * @filename: given file
 * @letters: number of letters it should read and print
 * Return: return write
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t Open, Read, Write; 
	char *buffer = malloc(sizeof(char) * letters);

	if (filename == NULL)
		return (0);

	if (buffer == NULL)
		return (0);

	Open = open(filename, O_RDONLY);
	Read = read(Open, buffer, letters);
	Write = write(STDOUT_FILENO, buffer, Read);

	if (Open == -1 || Read == -1 || Write == -1 || Write != Read)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(Open);

	return (Write);
}
