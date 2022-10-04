#include<stdio.h>
#include<stdlib.h>

/**
 * str_concat - concatenates two strings
 *
 * @s1: first string
 * @s2: Second string
 *
 * Return: 0 on faliure
 */


char *str_concat(char *s1, char *s2)
{
	char i, str1, str2, j;
	char *s;
	char *nul = "";

	if (s1 == NULL)
		s1 = nul;
	if (s2 == NULL)
		s2 = nul;
	str1 = 0, str2 = 0;
	while (*(s1 + str1))
	{
		str1++;
	}
	while (*(s2 + str2))
	{
		str2++;
	}

	s = malloc(sizeof(char) * (str1 + str2 + 1));

	if (s == 0)
		return (0);
	for (i = 0; i < str1; i++)
	{
		*(s + i) = *(s1 + i);
	}
	for (i = 0, j = str1; i <= str2; j++, i++)
	{
		*(s + j) = *(s2 + i);
	}
	return (s);
}

