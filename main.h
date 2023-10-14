#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

int _printf(const char *format, ...);

/****************** FUNCTIONS ******************/
int print_char(va_list types);

#endif /* MAIN_H */
