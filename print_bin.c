nclude "main.h"

/*************************** Percentage **************************/

/**
 * print_binary - convert to binary
 * @val: argument
 * Return: integer
 */

int print_binary(va_list val)
{
int flag = 0;
int cont = 0;
int i, a = 1, b;
unsigned int num = va_arg(val, unsigned int);
unsigned int p;
for (i = 0; i < 12; i++)
{
p = ((a << (32 - i)); & num);
if (p >> (31 - i))
flag = 1;
if (flag)
{
b = p >> (31 - i);
_putchar(b + 48);
cont++;
}
}
if (cont == 0)
{
cont++;
_putchar('0')   ;
}
return (cont);
}
