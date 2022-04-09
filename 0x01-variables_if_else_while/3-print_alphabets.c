#include <stdio.h>
/**
* main - Entry point
*
* Return: Always return 0 (success/correct)
*/
int main(void)
{
char mylowercasealpha;
char myuppercasealpha;
for (mylowercasealpha = 'a'; mylowercasealpha <= 'z'; mylowercasealpha++)
{
putchar(mylowercasealpha);
}
for (myuppercasealpha = 'A'; myuppercasealpha <= 'Z'; myuppercasealpha++)
{
putchar(myuppercasealpha);
}

putchar('\n');

return (0);
}
