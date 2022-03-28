#include "main.h"

/**
* create_file - function that creates a file.
* @filename: name of the file to create.
* @text_content: is a NULL terminated string to write to the file.
*/

int create_file(const char *filename, char *text_content)
{
        ssize_t rd, wt, op;

        char *buf = malloc(sizeof(char) * letters);

        if (filename == NULL)
                return (0);

        if (buf == NULL)
                return (0);

        op = open(filename, O_RDWR | O_CREAT | O_APPEND);
        rd = read(op, buf, letters);
        wt = write(STDOUT_FILENO, buf, rd);

        if (op == -1 || rd == -1 || wt == -1 || wt != rd)
        {
                free(buf);
                return (0);
        }

        free(buf);
        close(op);

        return (wt);
}
