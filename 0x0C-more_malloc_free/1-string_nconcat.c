#include "main.h"

/**
 * string_nconcat - allocates memory using malloc
 * @s1: string
 * @s2: string
 * @n: length of string
 *
 * Return: pointer to memory location
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	int i, k;

	if (!s1)
		s1 = EMPTY;
	if (!s2)
		s2 = EMPTY;

	s = malloc(sizeof(s1) + (sizeof(char) * (n + 1)));
	if (!s)
		return (NULL);

	i = 0;
	while (s1[i] != END)
	{
		s[i] = s1[i];
		i++;
	}

	k = 0;
	while (s2[k] != END && k < (int) n)
		s[i++] = s2[k++];

	s[i++] = END;

	return (s);
}
