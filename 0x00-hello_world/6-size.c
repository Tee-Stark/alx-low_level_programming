#include <stdio.h>
/**
 * main - main block
 * Return: 0
 */
int main(void)
{
	printf("Size of a char: %i bytes(s)\n", sizeof(char));
	printf("Size of an int: %i byte(s)\n", sizeof(int));
	printf("Size of a long int: %i bytes(s)\n", sizeof(long int));
	printf("Size of a long long int: %i byte(s)\n", sizeof(long long int));
	printf("Size of a float: %i bytes(s)", sizeof(float));
	printf("Size of unsigned int: %i byte(S)", sizeof(unsigned int));
	return (0);
}
