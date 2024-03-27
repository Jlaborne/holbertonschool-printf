#include "main.h"

/**
 * _strlen - Return the length of a string
 * @str: pointer to a string
 *
 * Description: Return the length of the string
 * Return: length, the size of the string
 */
int _strlen(const char *str)
{
	int length = 0;

	while (str[length] != '\0')
	{
		length++;
	}
	return (length);
}
