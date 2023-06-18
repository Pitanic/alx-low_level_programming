#include <stdio.h>
/**
 * main - a program that prints the size of various computer types
 * Return: 0
 */

int main(void)
{

	char a;
	int b;
	long int c;
	long long int d;
	float f;

printf("Size of a char: %lu 1 byte(s)\n", (unsigned long)sizeof(a));
printf("Size of an int: %lu 4 byte(s)\n", (unsigned long)sizeof(b));
printf("size of a long int: %lu 4 byte(s)\n", (unsigned long)sizeof(c));
printf("size of a long long int: %lu 8 byte(s)\n", (unsigned long)sizeof(d));
printf("size of a float: %lu 4 byte(s)\n", (unsigned long)sizeof(f));

return (0);
}
