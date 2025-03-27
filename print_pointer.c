#include "main.h"
#include <unistd.h>

/**
 * print_pointer - Imprime un puntero en formato hexadecimal
 * @ptr: Puntero a imprimir
 *
 * Return: Número de caracteres impresos
 */
int print_pointer(void *ptr)
{
    unsigned long address = (unsigned long)ptr;
    int count = 0;

    count += write(1, "0x", 2);
    count += print_number(address, 16, 0);

    return (count);
}
