#include "main.h"
#include <stdio.h>

/**
 * print_buffer - Prints a buffer print 10 bytes per line
 *						print the content of size bytes of the buffer
 *						pointed by b
 *						The output should print 10 bytes per line
 *						Each line starts with the position of the
 *						first byte of the line in hexadecimal (8 chars)
 *						starting with 0
 *						Each line shows the hexadecimal content
 *						(2 chars) of the buffer, 2 bytes at a time
 *						separated by a space
 *						Each line shows the content of the buffer.
 *						If the byte is a printable character, print the letter
 *						if not, print.
 *						Each line ends with a new line \n
 *						If size is 0 or less
 *						the output should be a new line only \n
 * @b: The buffer to be printed.
 * @size: The number of bytes to be printed from the buffer.
 */
void print_buffer(char *b, int size)
{
	int byte, count;

	for (byte = 0; byte < size; byte += 10)
	{
		printf("%08x: ", byte);

		for (count = 0; count < 10; count++)
		{
			if ((count + byte) >= size)
				printf("  ");

			else
				printf("%02x", *(b + count + byte));

			if ((count % 2) != 0 && count != 0)
				printf(" ");
		}

		for (count = 0; count < 10; count++)
		{
			if ((count + byte) >= size)
				break;

			else if (*(b + count + byte) >= 31 &&
							 *(b + count + byte) <= 126)
				printf("%c", *(b + count + byte));

			else
				printf(".");
		}

		if (byte >= size)
			continue;

		printf("\n");
	}

	if (size <= 0)
		printf("\n");
}