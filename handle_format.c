#include "main.h"
#include <stdarg.h>
#include <unistd.h>

/**
 * handle_format - Maneja los formatos dentro de la cadena.
 * @specifier: Especificador de formato.
 * @args: Lista de argumentos para ser imprimidos.
 *
 * Return: Número de caracteres impresos.
 */
int handle_format(char specifier, va_list args)
{
	int count = 0;

	if (specifier == 'c')
	{
		char c = va_arg(args, int);

		count += print_char(c);
	}
	else if (specifier == 's')
	{
		char *str = va_arg(args, char *);

		count += print_string(str);
	}
	else if (specifier == 'd' || specifier == 'i')
		count += print_number(va_arg(args, int), 10, 0);
	else if (specifier == 'u')
		count += print_number(va_arg(args, unsigned int), 10, 0);
	else if (specifier == 'o')
		count += print_number(va_arg(args, unsigned int), 8, 0);
	else if (specifier == 'x')
		count += print_number(va_arg(args, unsigned int), 16, 0);
	else if (specifier == 'X')
		count += print_number(va_arg(args, unsigned int), 16, 1);
	else if (specifier == 'p')
		count += print_pointer(args);
	else if (specifier == '%')
	{
		_putchar('%');
		count = 1;
	}
	else
	{
		_putchar('%');
		_putchar(specifier);
		count += 2;
	}
	return (count);
}
