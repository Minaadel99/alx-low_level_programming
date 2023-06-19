#include <stdio.h>
/**
 * main - prints the alphbet
 *
 * Return: Always 0 (success)
*/
int main(void)
{
int i;
char alp[26] = "abcdefghijklmnopqrstuvwxyz";
for (i = 0; i < 26; i++)
{
putchar(alp[i]);
}
putchar('\n');
return (0);
}
