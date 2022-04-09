#include <stdio.h>
/**
* main - Entry
*
* Return: Always return 0 (success/correct)
*/
int main(void)
{
int num1;
for (num1 = 5; num1 <= 9; num1++)
{
putchar(num1);
if (num1 == 9)
{
break;
}
putchar(',');
putchar(' ');
}
putchar ('\n');

return (0);
}
