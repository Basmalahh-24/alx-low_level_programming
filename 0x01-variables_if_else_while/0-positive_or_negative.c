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
		printf("the number is postive");
	}
	if (n == 0)
	{
		printf("the number is 0");
	}
	if (n < 0)
	{
		printf("the number is negative")
	}
	return (0);
