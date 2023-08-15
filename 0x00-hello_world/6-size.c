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
	printf("\nSize of a char: %u byte(s)", sizeof(char));
	printf("\nSize of an int: %u byte(s)", sizeof(int));
	printf("\nSize of a long int: %u byte(s)", sizeof(long int));
	printf("\nSize of a long long int: %u byte(s)", sizeof(long long int));
	printf("\nSize of a float: %u byte(s)", sizeof(float));
	return (0);
}
