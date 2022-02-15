#include "main.h"

/**
 * _strcat - codigo para conectar 2 cadenas
 * @dest: cadena "Hello "
 * @src: cadena "World\n"
 */

char *_strcat(char *dest, char *src)
{
	int idx_dest, idx_src;

	for (idx_dest = 0; dest[idx_dest] != '\0';)
		idx_dest++;

	for (idx_src = 0; src[idx_src] != '\0'; idx_src++)
	{
	dest[idx_src + idx_dest] = src[idx_src];
	}
	dest[idx_src + idx_dest] = '\0';
	return (dest);
}
