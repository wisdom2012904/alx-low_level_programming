#include <stdio.h>
/**
* main - Entry point
*
* Return : Alway 0 (success)
*/
int main(void)
{
printf("size of an int: %d byte(s)\n", sizeof(int));
printf("size of a long int: %f byte(s)\n", sizeof(long int));
printf("size of an float: %d byte(s)\n", sizeof(float));
printf("size of a char: %s byte(s)\n", sizeof(char));
printf("size of a long long int: %d byte(s)\n", sizeof(long long int));

return (0);
}
