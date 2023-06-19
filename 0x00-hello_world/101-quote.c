#include <unistd.h>
#include <sys/syscall.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints a specific message to the standard error.
 *
 * Return: Always 1
 */
int main(void)
{
	char message[] =
	    "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	syscall(SYS_write, STDERR_FILENO, message, sizeof(message) - 1);

	return (1);
}
