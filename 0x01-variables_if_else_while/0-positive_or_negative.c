#include<stdio.h>
#include<time.h>
#include<stdlib.h>
/**
 * main -to know postive or negative
 *
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n < 0)
	{
		printf("%d is %s\n", n, "negative");
	}
	if (n > 0)
	{
		printf("%d is %s\n", n, "positive");
	}
	if (n == 0)
	{
		printf("%d is %s\n", n, "zero");
	}
	return (0);
}

