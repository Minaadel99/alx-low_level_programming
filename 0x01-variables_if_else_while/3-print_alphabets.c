#include <stdio.h>
/**
 * main - prints the alphabet in lowercase and in uppercase
 * REturn: Always 0 (success)
*/
int main(void)
{
int n = 97;
int m = 65;
while (n <= 122)
{
putchar(n);
n++;
}
while (m <= 90)
{
putchar(m);
m++;
}
putchar('\n);
return (0);
}
