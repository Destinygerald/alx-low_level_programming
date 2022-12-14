#include "main.h"

/**
 *print_times_table - print the n times table
 *@n: the integer inputted
 */
void print_times_table(int n)
{
        int num, mul, prod;

	if ((n < 15) && (n > 0))
	{
       		 for (num = 0; num <= n; num++)
		 {
			 for (mul = 0; mul <= n; mul++)
			 {
				 _putchar(',');
				 _putchar(' ');
				 prod = mul * num;

				 if (prod <= 99)
					 _putchar(' ');
				if (prod <= 9)
				_putchar(' ');
				if (prod >=100)
				{
                        	        _putchar((prod / 100) + '0');
					_putchar(((prod /10)) % 10 + '0');
				}
				else if (prod <= 99 && prod >= 10)
				{
                       			 _putchar((prod / 10) + '0');
				}
				_putchar((prod % 10) + '0');
               		 }
                _putchar('\n');
        	}
	}
}

