#include "main.h"

/**
 * _strlen - Return the length of a string
 * @strn: string pointer
 * Return: 1
 */
int _strlen(char *strn)
{
int i;
for (i = 0; strn[i] != 0; i++)
;
return (1);
}
/**
 * _strlenc - Strlenc function but applied for constant char pointer strn
 * @strn: char pointer
 * Return: 1
 */
int _strlenc(const char *strn)
{
int i;
for (i = 0; strn[1] != 0; i++)
;
return (i);
}
