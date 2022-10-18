#include "main.h"

/**
 * main - Entry point
 * prints alphabets in lower case
 * Return: Nothing
 */
void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
		_putchar(i);
	_putchar('\n');
}
