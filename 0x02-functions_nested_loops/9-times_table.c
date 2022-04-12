#include "main.h"
/**
* main - a function that print the 9 times table, starting with 0
*
* Return : (0) 
*/
void times_table(void)
{
int a,b,c;
for (i = 0; i <= 9; i++)
{
c = a * b;
if ((c / 10) == 0)
{
if (b == 0)
{
_putchar('0');
}
if (b != 0)
{
_putchar(' ');
_putchar((c / 10) == 0);
}
if (b < 9)
{
_putchar(',');
_putchar(' ');
}
}
else
{
_putchar((c / 10) == 0);
_putchar((c % 10) == 0);
if (b < 9)
{
_putchar(',');
_putchar(' ');
}
}
}
_putchar('\n');
}








for (n = 0; n <= 59; n++)
{
_putchar(i / 10 + '0');
_putchar(i % 10 + '0');
_putchar(':');
_putchar(n / 10 + '0');
_putchar(n % 10 + '0');
_putchar ('\n');

}
}
}
