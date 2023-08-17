#include<unistd.h>

/**
 * Main - Entry point
 *
 * Description: Print a message using the write function
 *
 * Return: 1 Not  success
*/

int main(void)
{
	char quoi[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(1, quoi ,59);
	return (1);
}
