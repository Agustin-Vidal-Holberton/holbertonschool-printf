#include "main.h"
#include <unistd.h>

/**
 * print_number - Imprime un número en base específica
 * @num: Número a imprimir
 * @base: Base numérica (10, 8, 16, etc.)
 * @uppercase: 1 para hexadecimal en mayúsculas, 0 en minúsculas
 *
 * Return: Número de caracteres impresos
 */
int print_number(unsigned long num, int base, int uppercase)
{
    char buffer[50];
    char *digits = uppercase ? "0123456789ABCDEF" : "0123456789abcdef";
    int i = 0, count = 0;

    if (num == 0)
        return (write(1, "0", 1));

    while (num)
    {
        buffer[i++] = digits[num % base];
        num /= base;
    }

    while (i--)
        count += write(1, &buffer[i], 1);

    return (count);
}
