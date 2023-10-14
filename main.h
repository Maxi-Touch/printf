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

#endif
