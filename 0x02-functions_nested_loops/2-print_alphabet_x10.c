#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase,
 * followed by a new line
 */

void print_alphabet_x10(void)
{
	char gh;
	int i;


	i = 0;


	while (i < 10)
	{
		gh = 'a';
		while (gh <= 'z')
		{
			_putchar(gh);
			gh++;
			}
		_putchar('\n');
		i++;
	}
}
