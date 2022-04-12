#include "main.h"
/**
* main - a function that print every min of the day of Jack Bauer
*
* Return : (0) 
*/
void jack_bauer(void)
{
int n, i;
for (i = 0; i <= 23; i++)
{
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
