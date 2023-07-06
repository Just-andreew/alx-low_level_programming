#include "main.h"

/**
 * char *_strcpy - a function that copies the string pointed to by src
 * @dest: copy to
 * @src: copy from
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int f = 0;
	int x = 0;

	while (*(src + f) != '\0')
	{
		f++;
	}
	for ( ; x < f ; x++)
	{
		dest[x] = src[x];
	}
	dest[f] = '\0';
	return (dest);
}
