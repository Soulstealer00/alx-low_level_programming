#include<unistd.h>

/**
 * Main - Entry point
 * 
 * Description: Print using write
 *
 * Return: 1 Not  success
*/

int main(void)
{       
        char quo[] = "and that piece of art is usefu\" - Dora Korpar, 2015-10-19\n"
	
	write(1,quo,59);
	return (1);
}
