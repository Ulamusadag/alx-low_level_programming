#include <unistd.h>
#include <string.h>
/**
 * main - Entry point
 *
 * Description: use write
 *
 * Return: 1 (faile)*/

int main(void)
{
        char str = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	write(1, str, strlen(str));
	return (1);
}
