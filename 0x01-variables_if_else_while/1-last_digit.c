#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Print the last digit of number
 *
 * Return: Always Success
 *
 */

int main(void)

{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	for x = n % 10;

	if (x > 5)
	{
		printf("The last digit of %d is %d and is greater than 5\n", n, x);
	}
	else if (n < 6 && x != 0)
	{
		printf("The last digit of %d is %d and is less than 6 and not 0\n", n, x);
	}
	else
	{
		printf("The last digit of %d is %d and is 0\n", n, x);
	}
	return (0);
}