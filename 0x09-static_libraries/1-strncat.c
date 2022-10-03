#include "main.h"

<<<<<<< HEAD


/**
 * _strncat - Concatenates two strings using at most
 * an inputted number of bytes from src.
 * @dest: The string to be appended upon.
 * @src: The string to be appended to dest.
 * @n: The number of bytes from src to be appended to dest.
 * Return: A pointer to the resulting string dest.
 */



char *_strncat(char *dest, char *src, int n)

{

		int index = 0, dest_len = 0;



		while (dest[index++])

			dest_len++;

		for (index = 0; src[index] && index < n; index++)

		dest[dest_len++] = src[index];

					return (dest);

=======
/**
 * _strncat - concatenates two strings,
 * @dest: destination.
 * @src: source.
 * @n: print amount of bytes used from src.
 * Return: the pointer to destination
 */

char *_strncat(char *dest, char *src, int n)
{
	int count = 0, count2 = 0;

	while (*(dest + count) != '\0')
	{
		count++;
	}

	while (count2 < n)
	{
		*(dest + count) = *(src + count2);
		if (*(src + count2) == '\0')
			break;
		count++;
		count2++;
	}
	return (dest);
>>>>>>> 0acd7f73402b38ff4a630a3071e875e9713307a1
}
