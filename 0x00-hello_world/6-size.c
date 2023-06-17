#include <stdio.h>
/**
 * main - a program that prints the size of various computer types
 * Return: 0
 */

int main(void)
{
	printf("Size of a char: %lu byte(s)", sizeof(char));
	printf("Size of an int: %lu byte(s)", sizeof(int));
	printf("size of a long int: %lu byte(s)", sizeof(long int));
	printf("size of a long long int: %lu byte(s)", sizeof(long long int));
	printf("size of a float: %lu byte(s)", sizeof(float));
	return (0);
}
