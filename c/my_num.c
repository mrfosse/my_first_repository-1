#include "holberton.h"
#include <stdarg.h>
/**
 *my_puts_str - str followed by a new line
 *@str: string
 *
 */
void my_puts_str(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
}
/**
 *my_percentage - % as an input
 *@per: A %
 *Return: the % char
 */
int my_percentage(int per)
{
	per = '%';
	_putchar(per);
	return (1);
}

/**
 * itoa - itoa home made
 * @n: number
 * @s: ptr to char str
 * @b: base
 
int itoa(int n, char s[], int b) 
{
	static char digits[] = "0123456789abcdefghijklmnopqrstuvwxyz";
	int i=0, sign;
    
	if ((sign = n) < 0)
		n = -n;
	do {
		s[i++] = digits[n % b];
	} while ((n /= b) > 0);
	if (sign < 0)
		s[i++] = '-';
	s[i] = '\0';
	return (i);
}

/**
 * my_number - prints numbers
 * @n: number
 * Return: number
 */

int my_number(int n)
{
char buffer[5];

itoa(n, buffer, 10);
}
