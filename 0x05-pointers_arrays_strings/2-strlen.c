#include "main.h"

/**
 * _strlen - Return the lenght of a string
 * @s: The string to get the length
 * Return: length
 */
int _strlen(char *s)
{
	int longi = 0;

	while (*s != '\0')
	{
		longi++;
		s++;
	}
	return (longi);
}
