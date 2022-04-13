#include "main.h"
/**
*print_alphabet_x10 - a function that prints alphabetica letters in lowercase
*
*Return: Always 0
*/
void print_alphabet_x10(void)
{
int lowwercase;
int i;

i = 0;
while (i < 10)
{
for (lowwercase = 'a'; lowwercase <= 'z'; lowwercase++)
{
_putchar(lowwercase);
}
i++;
_putchar ('\n');
}
}
