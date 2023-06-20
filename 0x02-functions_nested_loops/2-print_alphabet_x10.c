#include "main.h"
/**
 * print _alphabet_X10 - function that will print the alphabet10 times
*/
void print _alphabet_X10(void)
{
int ch, line;
for (line = 0; line <= 9; line++)
{
for  (ch = 'a'; ch <= 'z'; ch++)
{
_putchar(ch);
_putchar('\n');
}
}
}
