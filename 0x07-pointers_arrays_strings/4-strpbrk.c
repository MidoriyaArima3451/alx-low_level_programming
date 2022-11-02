#include "main.h"
/**
*_strpbrk - function
*@s: var
*@accept: var
*Return: value
*/
char *_strpbrk(char *s, char *accept)
{
	int i = 0;
	int j = 0;

	for (; *(s + i) != '\0'; i++)
	{
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
				return (s + i);
		}
	}
	return ('\0');
}
