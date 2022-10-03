#include "main.h"

<<<<<<< HEAD


/**
 *
 *  * *_strcat - to concatenate two strings
 *
 *   * @src: the source string to append to @dest
 *
 *    * @dest: the destiation string to be concatenated upon
 *
 *     * Return: pointer to the resulting string
 *
 *      */



char *_strcat(char *dest, char *src)

{

		int index = 0;

			int dest_len = 0;



				while (dest[index++])

							dest_len++;

					for (index = 0; src[index]; index++)

								dest[dest_len++] = src[index];

						return (dest);

=======
/**
 * _strcat - concatenates two strings,
 * @dest: destination.
 * @src: source.
 * Return: the pointer to dest.
 */

char *_strcat(char *dest, char *src)
{
	int count = 0, count2 = 0;

	while (*(dest + count) != '\0')
	{
		count++;
	}

	while (count2 >= 0)
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
