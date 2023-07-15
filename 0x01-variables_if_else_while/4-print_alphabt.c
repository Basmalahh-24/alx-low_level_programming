#include<stdio.h>
/**
 * main -alphabet except e and q
 *
 * Return: 0
 */
int main(void)
{
	int lowercase = 'a';

	while (lowercase <= 'z')
	{
		if (lowercase == 'e' || lowercase == 'q')
		{
			lowercase += 1;
		}
		else
		{
			putchar(lowercase);
			lowercase += 1;
		}
	}
	return (0);
}



