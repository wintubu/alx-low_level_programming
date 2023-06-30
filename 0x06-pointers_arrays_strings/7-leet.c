#include "main.h"
/**
 * leet - change letter to numbers.
 * @s:source  analized string.
 *
 * Return: String with all vowels changed.
 */
char *leet(char *s)
{
	char e[] = "aeotlAEOTL";
	char n[] = "4307143071";
	int i = 0;
	int j;

	while (*(s + i) != '\0')
	{
		for (j = 0; j <= 9; j++)
		{
			if (*(s + i) == e[j])
			{
				*(s + i) = n[j];
			}
		}
		i++;
	}
	return (s);
}
