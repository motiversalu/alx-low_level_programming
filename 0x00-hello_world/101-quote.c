#include <unistd.h>
/**
 * main - prints a message without using printf or puts
 * Return: 1
 */
int main(void)
{
    char *message = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";
    write(2, message, 60);
    return 1;
}

