#include "lib.h"
/**
* _putnbr - print the integer
* @num the integerto be printed
* Return: the integer
*/
void _putnbr(int num)
{
  int c;

	if (num < 0)
	{
		_putchar('-');
		if (num == -2147483648)
		{
			_putchar(num);
      num = -147483648;
		}
		num = -num;
	}
	if (num >= 10)
	{
		c = num % 10 + 48; /*n modulo 10 + 48( ascii code -> 0)*/
		num = num / 10;
		_putnbr(num);
		_putchar(c);
	}
	else
		_putchar(num + 48);
}

