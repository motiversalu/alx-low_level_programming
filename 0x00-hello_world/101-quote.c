#include <unistd.h>
#include <unistd.h>
/**
 * main - prints a piece of text without using printf or puts
 * Return: 1
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n",59);
	return (1);
}
