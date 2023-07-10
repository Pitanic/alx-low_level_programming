#include "main.h"
#include<stdio.h>
/**
 * _puts - prints a string, followed by a new line, to stdout
 * @str: string to print
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
		_putchar('\n');
}
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
puts("\"Programming is like building a multilingual puzzle");
return (0);
}
