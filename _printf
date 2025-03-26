#include "main.h"
#include <stdarg.h>
#include <unistd.h>

/**
 * _printf - Produce salida segun un formato especificado
 * @format: Cadena de caracteres con especificadores de formato
 *
 * Return: Numero de caracteres impresos (excluyendo el byte nulo)
 */

int _printf(const char *format, ...)
{
	va_list args;
	int count = 0;
	char *str;

	if (!format)
	{
		return (-1);
	}

	va_start(args, format);

	while (*format)
	{
		if (*format == '%' && *(format + 1))
		{
			format++;
			if (*format == 'c')
			{
				char c = va_arg(args, int);

				count += write(1, &c, 1);
			}
			else if (*format == 's')
			{
				str = va_arg(args, char *);
				if (!str)
				{
					str = "(NULL)";
				}
				while (*str)
				{
					count += write(1, str++, 1);
				}
			}
			else if (*format == '%')
			{
				count += write(1, "%", 1);
			}
		}
		else
		{
			count += write(1, format, 1);
		}
		format++;
	}

	va_end(args);
	return (count);
}
