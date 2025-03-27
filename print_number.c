#include "main.h"
#include <stdarg.h>
#include <unistd.h>

/**
 * print_number - Convierte un número a una cadena y la imprime.
 * @num: Número que se va a imprimir.
 * @base: Base del número (10, 8, 16).
 * @uppercase: Si es 1, usa letras mayúsculas para hexadecimal.
 *
 * Return: Número de caracteres impresos.
 */
int print_number(long num, int base, int uppercase)
{
	char buffer[50];
	int i = 0, count = 0;
	char *digits = "0123456789abcdef";
	int j;

	if (uppercase)
		digits = "0123456789ABCDEF";
	if (num < 0 && base == 10)
	{
		_putchar('-');
		count++;
		num = -num;
	}
	if (num == 0)
	{
		_putchar('0');
		return (1);
	}
	while (num > 0)
	{
		buffer[i++] = digits[num % base];
		num /= base;
	}
	for (j = i - 1; j >= 0; j--)
	{
		_putchar(buffer[j]);
		count++;
	}
	return (count);
}
