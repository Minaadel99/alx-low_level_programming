#include <stdio.h>
/**
 * main -Entry point
 * DEscription: print numbers of base16 in lowercase
 * Return: Always 0 (success)
*/
int main(void)
{
int d = 48; /*48; decimal rep of 0*/
while (d <= 102)
{
putchar(d);
if (d == 57)
d += 39;
d++;
}
putchar('\n');
return (0);
}
