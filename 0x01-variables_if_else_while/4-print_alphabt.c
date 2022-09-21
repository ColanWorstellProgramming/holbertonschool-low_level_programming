#include <stdio.h>

/**i
 *main - starts file
 *Return: ends file
 */

int main(void)
{

char x;

for(x = 'a'; x <= 'z'; x++)
{
if(x!='e' && x!='q')
{
putchar(x);
}
}
putchar('\n');
return (0);
}
