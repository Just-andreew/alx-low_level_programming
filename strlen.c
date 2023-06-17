#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: length
 */
int _strlen(char *s)
{
	int longg = 0;

	while (*s != '\0')
	{
		longg++;
		s++;
	}

	return (longg);
}

