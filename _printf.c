#include "main.h"
#include <stdarg.h>
#include <unistd.h>

/**
 * _printf - Produce salida según un formato especificado
 * @format: Cadena de caracteres con especificadores de formato
 *
 * Return: Número de caracteres impresos (excluyendo el byte nulo)
 */
int _printf(const char *format, ...)
{
	va_list args;
	int i = 0, count = 0;

	if (!format)
		return (-1);

	va_start(args, format);

	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '\0')
			{
				va_end(args);
				return (-1);
			}
			count += handle_format(format[i + 1], args);
			i++;
		}
		else
		{
			_putchar(format[i]);
			count++;
		}
		i++;
	}
	va_end(args);
	return (count);
}
