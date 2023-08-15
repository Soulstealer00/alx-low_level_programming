#include<stdio.h>

/**
 * main - Entry
 *
 * Description: A C program that runs different sizes of variables
 *
 * Return: Always 0 (succes)
*/

int main(void)
{
	printf("\nSize of a char: %lu byte(s)", sizeof(char));
	printf("\nSize of an int: %lu byte(s)", sizeof(int));
	printf("\nSize of a long int: %lu byte(s)", sizeof(long int));
	printf("\nSize of a long long int: %lu byte(s)", sizeof(long long int));
	printf("\nSize of a float: %lu byte(s)", sizeof(float));
	return (0);
}
