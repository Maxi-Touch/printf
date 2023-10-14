#include "main.h"

/****************** Print Char ********************/

/**
 * print_char - Print a char
 * @types: List a of arguments
 * Return: Nuymber of char printed
 */
int print_char(va_list types)
{
char c = va_arg(types, int);
return (c);
}

int print_str(va_list types)
{
str s = va_arg(types,*char);
return (s)
}
