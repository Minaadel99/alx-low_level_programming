#include <stdio.h>
/**
 * main -Entry point
 * Description: prin all possible different combinations of two digits
 * Return: Always 0 (success)
*/
int main(void)
{
int d1 = 0;
int d3, d2;
while (d1 <= 9)
{
d2 = 0;
while (d2 <= 9)
{
d3 = 0;
while (d3 <= 9)
{
if (d1 != d2 && d1 < d2 && d2 != d3 && d2 < d3)
{
putchar(d1 + 48);
putchar(d2 + 49);
putchar(d2 + 48);
if (d1 + d2 + d3 != 24)
{
putchar(',');
putchar(' ');
}
}
d3++;
}
d2++;
}
d1++;
}
putchar('\n');
return (0);
}
