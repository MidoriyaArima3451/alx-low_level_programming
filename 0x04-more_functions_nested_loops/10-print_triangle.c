#include <stdio.h>
#include "main.h"

/**
*print_triangle - check a char
*@size: integer
*
*Return: 0 or 2
*/
void print_triangle(int size)
{
	int a;
	int b;
	int c;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	for (a = 1; a <= size; a++)
	{
		for (b = 1; b <= size - a; b++)
		{
			_putchar(' ');
		}
		for (c = 1; c <= a; c++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
