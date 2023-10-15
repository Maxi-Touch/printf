#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

int _putchar(char c);
int _printf(const char *format, ...);

/****************** FUNCTIONS ******************/
int print_char(va_list val);
int print_str(va_list types);
int _strlen(char *strn);
int _strlenc(const char *strn);
int print_percentage(void);
int print_int(va_list args);
int print_dec(va_list args);
int print_binary(va_list val);
int print_unsigned(va_list args);
int print_oct(va_list val);
int print_hex(va_list val);
int print_HEX(va_list val);
int print_HEX_extral(unsigned int num);
int print_string_5(va_list val);

#endif
