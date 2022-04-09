#include <stdio.h>
/**
* main - Entry
*
* Return: Always return 0 (success/correct)
*/
int main(void)
{
char base16;

for (base16 = 48; base16 <= 57; base16++)
{
putchar(base16);
}
for (base16 = 97; base16 <= 102; base16++)
{
putchar(base16);
}
putchar ('\n');

return (0);
}
