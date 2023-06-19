#include <stdio.h>
/**
 * main - prints the alphabet in lowercase and in uppercase
 * REturn: Always 0 (success)
*/
int main(void)
{
char ch = 'a';
char CH = 'A';
while (ch <= 'z')
{
putchar(ch);
ch++;
}
while (CH <= 'Z')
{
putchar(CH);
CH++;
}
putchar('\n');
return (0);
}
