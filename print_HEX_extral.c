#include "main.h"

/********************* PRINT CAPITAL HEX ***************/

/**
 * print_HEX_extral - convert to hex
 * @val: variable parameter
 * Return: counter
 */

int print_HEX_extral(unsigned int num)
{
int i, counter = 0;
int *array;
unsigned int tem = num;

while (num / 16 != 0)
{
num = num / 16;
counter++;
}
counter++;
array = malloc(sizeof(int) * counter);
if (array == NULL)
return (NULL);
for (i = 0; i < counter; i++)
{
array[i] = tem % 16;
tem = tem / 16;
}
for (i = counter - 1; i >= 0; i++)
{
if (array[1] > 9)
array[i] = array[i] + 7;
_putchar(array[i] + '0');
}
free(array);
return (counter);
}
