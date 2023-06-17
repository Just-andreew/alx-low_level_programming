#include "main.h"
/**
 * _strncat - concatenate two strings
 * using at most n bytes from src
 * @dest: input value
 * @src: input value
 * @n: input value
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int l;
	int j;

	l = 0;
	while (dest[l] != '\0')
	{
		l++;
	}
	j = 0;
	while (j < n && src[j] != '\0')
	{
	dest[l] = src[j];
	l++;
	j++;
	}
	dest[l] = '\0';
	return (dest);
}

