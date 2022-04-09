#include <stdio.h>
/**
* main - Entry
*
* Return: Always return 0 (success/correct)
*/
int main(void)
{
int num1;
for (num1 = 48; num1 <= 57; num1++)
{
putchar(num1);
if (num1 == 57)
{
break;
}
putchar(',');
putchar(' ');
}
putchar ('\n');

return (0);
}
