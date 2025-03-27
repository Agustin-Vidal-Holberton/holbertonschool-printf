#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>

int _printf(const char *format, ...);
int handle_format(char specifier, va_list args);
int print_char(char c);
int print_string(char *str);
int print_number(long num, int base, int uppercase);
int print_pointer(void *ptr);
int _putchar(char c);

#endif /* MAIN_H */
