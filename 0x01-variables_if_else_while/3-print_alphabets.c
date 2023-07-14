#include<stdio.h>
/**
 * main -show upper and lower alphabet
 *
 * Return: 0
 */
int main(void)
{
	int n;
	int m;

	for (n = 97 ; n <= 122 ; n++)
	{
		putchar(n);
	}
	for (m = 65 ; m <= 90 ; m++)
	{
		putchar(m);
	}
	return (0);
}
