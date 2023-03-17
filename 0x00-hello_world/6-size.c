#include <stdio.h>
/**
 * main - print the output for the sizes of the data types
 * Return: 0
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

	print("Size of a char: %lu byte(S)\n", (unsigned long)sizeof(a));
	print("Size of a int: %lu byte(S)\n", (unsigned long)sizeof(b));
	print("Size of a long int: %lu byte(S)\n", (unsigned long)sizeof(c));
	print("Size of a long long int: %lu byte(S)\n", (unsigned long)sizeof(d));
	print("Size of a float: %lu byte(S)\n", (unsigned long)sizeof(f));
	return (0);
}
