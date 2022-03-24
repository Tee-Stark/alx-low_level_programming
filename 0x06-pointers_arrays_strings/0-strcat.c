#include "main.h"

/**
 * _strcat - concatenates two strings
 *
 * @dest: destination string
 * @src: source string
 * 
 * Return: the pointer to @dest
 */
char *_strcat(char *dest, char *src)
{
	int srcLen = 0, destLen = 0;

	while (*(dest + destLen) != '\0')
		destLen++;
	
	/* While true */
	while (1 == 1)
	{
		*(dest + destLen) = *(src + srcLen);
		if (*(src + srcLen) == '\0')
			break;

		srcLen++;
		destLen++;
	}

	return (dest);
}
