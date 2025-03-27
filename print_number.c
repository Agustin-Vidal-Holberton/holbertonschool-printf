#include "main.h"
#include <stdarg.h>
#include <unistd.h>

/**
 * print_number - Convierte un número a una cadena y la imprime.
 * @num: Número que se va a imprimir.
 * @base: Base numerico (10 = decimal, 8 = octal, 16 = hexadecimal).
 * @uppercase: Si es 1, usa letras mayusculas en hexadecimal.
 * Return: Número de caracteres impresos.
 */
int print_number(long num, int base, int uppercase)
{
	int count = 0;
	char *digits = uppercase ? "0123456789ABCDEF" : "0123456789abcdef";

	if (num < 0)
	{
		_putchar('-');
		count++;
		num = -num;
	}

	if (num / base)
		count += print_number(num / base, base, uppercase);
	
	_putchar(digits[num % base]);
	count++;

	return (count);
}
