#include <time.h>
/**
 * main - prints the alphabet in lowercase, and then in uppercase
 * REturn: Always 0 (success)
*/
int main(void)
{
char low;
for (low = 'a'; low <= 'z'; low++)
putchar(low);
for (low = 'A'; low <= 'Z'; low++)
putchar(low);
putchar('\n');
return (0);
}
