#include <stdio.h>
/**
* main - Entry
*
* Return: Always return 0 (success/correct)
*/
int main(void)
{
char alphabet;

for (alphabet = 122; alphabet >= 97; alphabet--)
{
putchar(alphabet);
}
putchar('\n');

return (0);
}
