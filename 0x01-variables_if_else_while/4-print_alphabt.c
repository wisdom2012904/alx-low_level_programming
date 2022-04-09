#include <stdio.h>
/**
* main - Entry
*
* Return: Always return 0 (success/correct)
*/
int main(void)
{
char myalphabet;
for (myalphabet = 'a'; myalphabet <= 'z'; myalphabet++)
{
if (myalphabet == 'q')
continue;
else if (myalphabet == 'e')
continue;
putchar(myalphabet);
}
putchar('\n');

return (0);
}
