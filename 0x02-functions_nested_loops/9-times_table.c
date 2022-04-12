#include "main.h"
/**
* times_table - a function that print the 9 times table, starting with 0
*
* Return: Always 0 
*/
void times_table(void)
{
int i,j,k;
for (i = 0; i <= 9; i++)
{
k = i * j;
if ((k / 10) == 0)
{
if (j == 0)
{
_putchar('0');
}
if (j != 0)
{
_putchar(' ');
_putchar((k / 10) == 0);
}
if (j < 9)
{
_putchar(',');
_putchar(' ');
}
}
else
{
_putchar((k / 10) == 0);
_putchar((k % 10) == 0);
if (j < 9)
{
_putchar(',');
_putchar(' ');
}
}
}
_putchar('\n');
}
}

