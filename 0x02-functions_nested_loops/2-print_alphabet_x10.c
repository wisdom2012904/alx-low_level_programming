#include "main.h"
/**
* main - a function that prints alphabetica letters in lowercase
*
* Return : x10 a-z 
*/
void print_alphabet(void)
{
int n, i;
i = 0;
while (i <= 9)
{
for (n = 'a'; n <= 'z'; n++){
_putchar(n);
} 
i++;
-putchar ('\n');
} 
