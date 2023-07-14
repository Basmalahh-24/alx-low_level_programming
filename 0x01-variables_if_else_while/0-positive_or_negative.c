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
		printf("is postive");
	}
	if (n == 0)
	{
		printf("is zero");
	}
	if (n < 0)
	{
		printf("is negative");
	}
	return (0);
}
