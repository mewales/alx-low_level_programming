#include "main.h"

/**
 * print_alphabet - prints the alpha in lower case
 */

void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);

	putchar('\n');
}
