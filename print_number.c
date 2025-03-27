#include "main.h"
#include <stdarg.h>
#include <unistd.h>

/**
 * print_number - Convierte un número a una cadena y la imprime.
 * @n: Número que se va a imprimir.
 *
 * Return: Número de caracteres impresos.
 */
int print_number(int n)
{
	int count = 0;

	if (n < 0)
	{
		_putchar('-');
		count++;
		n = -n;
	}

	if (n / 10)
	{
		count += print_number(n / 10);
	}
	_putchar((n % 10) + '0');
	count++;

	return (count);
}
