#include <unistd.h>

/**
 * main - Entry point
 *
 * Return:  with 1 for errors
 */
int main(void)
{
	/* Using POSIX api */
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19", 59);

	return (1);
}
