#include "main.h"

<<<<<<< HEAD


/**
 *
 *  * *_strcpy -  copies the string pointed to by src
 *
 *   * @dest: char type string
 *
 *    * @src: char type string
 *
 *     * Description: Copy the string pointed to by pointer `src` to
 *
 *      * the buffer pointed to by `dest`
 *
 *       * Return: Pointer to `dest
 *
 *        */



char *_strcpy(char *dest, char *src)

{

		int i = -1;



			do {

						i++;

								dest[i] = src[i];

									} while (src[i] != '\0');



				return (dest);

=======
/**
 * _strcpy - Copies a string pointed to by @src, including the
 * terminating null byte, to a buffer pointed to by @dest.
 * @dest: A buffer to copy the string to.
 * @src: A source string to cpoy.
 *
 * Return: A pointer to the destination string @dest.
 */
char *_strcpy(char *dest, char *src)
{
	int index = 0;

	for (index = 0; src[index] != '\0'; index++)
	{
		dest[index] = src[index];
	}
	dest[index] = '\0';

	return (dest);
>>>>>>> 0acd7f73402b38ff4a630a3071e875e9713307a1
}
