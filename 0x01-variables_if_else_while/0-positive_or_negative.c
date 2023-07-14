#include<stdio.h>
/**
 * main -to test postive or negstive
 *
 * Return: 0
 */
int main(void)
{
	int n;

	scanf("%d", &n);
	if (n > 0)
	{
		printf("%d is postive", n);
	}
	if (n == 0)
	{
		printf("%d is zero", n);
	}
	if (n < 0)
	{
		printf("%d is negative", n);
	}
	return (0);
}
