#include "main.h"
/** swap_int - swape the value of two integer
 * @a: input parameter 1
 * @b: input parameter 2
 * Return: Nothing
*/
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
