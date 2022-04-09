#include <stdio.h>
/**
* This is a program which prints all lowercase alphabet except e and q
*
* Return: Always return 0 (success/correct)
*/
int main(void)
{
char myalphabet;
for (myalphabet = 'a'; myalphabet <= 'z'; myalphabet++)
{ 
if (myalphabet != 'e' || 'q'){
putchar(myalphabet);
}
}
putchar('\n');

return (0);
}
