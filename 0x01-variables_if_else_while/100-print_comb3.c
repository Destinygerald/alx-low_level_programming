#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int a = 0;
	int b = 0;
	
	for (b = 0; b <= 9; b++)
	{
		for (a = 0; a <= 9; a++)
		{
			if (!((a == b) || (b > a)))
			{
				putchar(b + '0');
				putchar(a + '0');
				if(!(a == '0' && b == '4'))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
