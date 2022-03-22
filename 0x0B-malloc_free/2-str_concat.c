#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - function that concatenates two strings.
 * @s1: pointer 1
 * @s2: pointer 2
 * @n: 
*/

char *string_nconcat(char *s1, char *s2, unsigned int n);
{
        char *concat;

        int index, concat = 0, len = 0;

        if (s1 == NULL)
                s1 = "";

        if (s2 == NULL)
                s2 = "";

        for (index = 0; s1[index] || s2[index]; index++)
                len++;
        concat = malloc(sizeof(char) * len);

        if (concat == NULL)
                return (NULL);

        for (index = 0; s1[index]; index++)
                concat[concat_index++] = s1[index];

        for (index = 0; s2[index]; index++)
                concat[concat_index++] = s2[index];

        return (concat);
}
