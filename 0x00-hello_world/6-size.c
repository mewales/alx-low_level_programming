#include <stdio.h>
/**
 * main - A program that prints the size of various computer types
 * Return: 0 (Success)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

	printf("Size of a char: %d byte(s)\n", (unsigned long)sizeof(char));
	printf("Size of an int: %d byte(s)\n", (unsigned long)sizeof(int));
	printf("Size of a long int: %d  bytes(s)\n", (unsigned long)sizeof(long int));
	printf("Size of a long long: %d bytes(s)\n", (unsigned long)sizeof(long long));
	printf("Size of a float: %d bytes(s)\n", (unsigned long)sizeof(f));
return (float);
}

