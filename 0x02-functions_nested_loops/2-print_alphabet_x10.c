#include "main.h"
/**
* print_alphabet - a function that prints alphabetica letters in lowercase
*
* Return : Always 0
*/
void print_alphabet(void)
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
