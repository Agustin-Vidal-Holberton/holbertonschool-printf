#include "main.h"
#include <stdarg.h>
#include <unistd.h>

/**
 * handle_format - Maneja los especificadores de formato y llama a la función correspondiente
 * @format: Especificador de formato
 * @args: Lista de argumentos
 *
 * Return: Número de caracteres impresos
 */
int handle_format(char format, va_list args)
{
    int count = 0;

    switch (format)
    {
        case 'c':
            count += print_char(va_arg(args, int));
            break;
        case 's':
            count += print_string(va_arg(args, char *));
            break;
        case 'd':
        case 'i':
            count += print_number(va_arg(args, int), 10, 0);
            break;
        case 'u':
            count += print_number(va_arg(args, unsigned int), 10, 0);
            break;
        case 'o':
            count += print_number(va_arg(args, unsigned int), 8, 0);
            break;
        case 'x':
            count += print_number(va_arg(args, unsigned int), 16, 0);
            break;
        case 'X':
            count += print_number(va_arg(args, unsigned int), 16, 1);
            break;
        case 'p':
            count += print_pointer(va_arg(args, void *));
            break;
        case '%':
            count += _putchar('%');
            break;
        default:
            count += _putchar('%') + _putchar(format);
            break;
    }
    return (count);
}
