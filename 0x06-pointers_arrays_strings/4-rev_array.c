#include "main.h"
/**
 * reverse_array - print array in reverse
 *
 * @a: parameter
 * @n: number of array element
 * Return: void
 */
void reverse_array(int *a, int n)
{
	/*int index;*/
	/*int len;*/
	int back;
	int front;
	int tmp;

	/*len = 0;*/
	/* find the length of the array*/

	/*for (index = 0; a[index] < sizeof(*a) / sizeof(a[0]); index++)*/
	/*{*/
		/*len += 1;*/
	/*}*/
	front = 0;
	back = n - 1;
	/*index = 0;*/
	while (front < back)
	{
		tmp = a[front];
		a[front] = a[back];
		a[back] = tmp;
		front++;
		back--;
	}
}


