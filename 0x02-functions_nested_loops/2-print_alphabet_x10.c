#include "main.h"
/**
* print_alphabet - a function that prints alphabetica letters in lowercase
*
* Return : Always 0
*/
void print_alphabet(void)
{
int n, i;
i = 0;
while (i <= 9)
{
for (n = 'a'; n <= 'z'; n++)
{
_putchar(n);
} 
i++;
_putchar ('\n');
} 
